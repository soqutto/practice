# -*- coding: utf-8 -*-

import sys

N = int(input())
pow3 = 1
pow5 = 1

for i in range(1, 38):
    pow3 *= 3
    pow5 = 1
    for j in range(1, 26):
        pow5 *= 5
        if(pow3 + pow5 == N):
            print("{} {}".format(i, j))
            sys.exit()

print(-1)
        
