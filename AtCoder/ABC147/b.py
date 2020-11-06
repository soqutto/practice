# -*- coding: utf-8 -*-

S = input()
nhugs = 0

for i in range(len(S)//2):
    if S[i] != S[-(i+1)]:
        nhugs += 1

print(nhugs)
