# -*- coding: utf-8 -*-
import sys

"""
(i, j) -> (i+1, j+2) or (i+2, j+1)

o - - -
- - * -
- * - - *
- - - *
- - * - 

"""
import numpy as np

x, y = list(map(int, input().split()))
mod = 10**9 + 7

ways = np.zeros((y+1, x+1), dtype=np.int32)
ways[0, 0] = 1
ways[:, 0] = 0
ways[0, :] = 0
ways[1, 1] = 0
if y >= 2:
    ways[2, 1] = 1
if x >= 2:
    ways[1, 2] = 1

if (x+y) % 3 != 0:
    print("0")
    sys.exit()

for i in range(2, max(x+1, y+1)):
    # x scan
    for j in range(i, x+1):
        if i+j % 3 != 0:
            continue
        else:
            ways[i, j] = (ways[i-1, j-2] + ways[i-2, j-1]) / mod
    # y scan
    for k in range(i, y+1):
        if i+k % 3 != 0:
            continue
        else:
            ways[k, i] = (ways[k-1, i-2] + ways[k-2, i-1]) / mod

print("{}".format(ways[y, x]))

    

