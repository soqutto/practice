# -*- coding: utf-8 -*-

N = int(input())
A = {}
for i, order in enumerate(map(int, input().split())):
    A[i] = order

A_sorted = sorted(A.items(), key=lambda x:x[1])

for i in A_sorted:
    print("{} ".format(i[0]+1), end='')
