# -*- coding: utf-8 -*-

N = int(input())
D = list(map(int, input().split()))

S = 0

for i in range(N-1):
    for j in range(i+1, N):
        S += D[i] * D[j]

print(S)
