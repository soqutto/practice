# -*- coding: utf-8 -*-

import math
import itertools
from functools import reduce
import numpy as np

N = int(input())

factor = []
tmp = int(math.sqrt(N)) + 1
for num in range(2, tmp):
    while N % num == 0:
        N //= num
        factor.append(num)

if N != 1:
    factor.append(N)

L = len(factor)

# factor number
if len(factor) == 1:
    print("{}".format(factor[0]-1))
else:
    sum_max = reduce(lambda a, b: a*b, factor)+1
    for i in range(1, L//2+2):
        comb = itertools.combinations(range(L), i)
        for c in comb:
            I = 1
            J = 1
            for i in range(L):
                factor(jk





print(factor)
