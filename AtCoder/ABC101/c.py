# -*- coding: utf-8 -*-

import numpy as np
import sys

N, K = map(int, input().split())
A = np.array(list(map(int, input().split())), dtype=np.int)

arg = 0
op_l = 0
while(True):
    arg_new = arg + K - 1
    op_l += 1
    if np.any(A[arg:arg_new+1] == 1):
        last_arg = (arg, arg_new)
        break
    arg = arg_new

if arg_new == N-1:
    print(op_l)
    sys.exit()

arg = N-1
op_r = 0
while(True):
    arg_new = arg - K + 1
    op_r += 1
    if np.any(A[arg_new:arg+1] == 1):
        if (arg_new, arg) == last_arg:
            op_r -= 1
        break
    if arg_new == last_arg[1]+1:
        break
    arg = arg_new

print(op_l+op_r)
