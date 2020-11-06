# -*- coding: utf-8 -*-
import math

N = int(input())

sum_min = 10**12+1
ab = None

for a in range(1, int(math.sqrt(N))+1):
    if N % a == 0:
        b = N//a
        if b >= a and a+b-2 < sum_min:
            sum_min = a+b-2
            ab = (a, b)

print(sum_min)
