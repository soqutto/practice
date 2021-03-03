# -*- coding: utf-8 -*-

import sys

N = int(input())
A = list(map(int, input().split()))

for i in A:
    if i == 0:
        print(0)
        sys.exit()

prod = 1

for i in A:
    prod *= i
    if prod > 1e18:
        print(-1)
        sys.exit()

print(prod)



