# -*- coding: utf-8 -*-

S = input()
K = int(input())

n = 0
k = 0

i = 0

if len(S) == 1:
    S = ''.join((S for _ in range(K)))
    K = 1

while(i < len(S)-1):
    if S[i] == S[i+1]:
        n += 1
        i += 2
    else:
        i += 1

if i == len(S)-1:
    if S[0] == S[-1] and K >= 2:
        n += 1
        k = -1

print(n * K + k)


