# -*- coding: utf-8 -*-

import numpy as np

N = int(input())
S = []

a_ascii = ord('a')
bins_of_char = np.zeros((N, 26),dtype=np.int)
num_of_anagram = 0

for i in range(N):
    S.append(input())

for i in range(N):
    for char in map(ord, S[i]):
        bins_of_char[i, char-a_ascii] += 1

for i in range(0, N-1):
    for j in range(i+1, N):
        if np.all(bins_of_char[i] == bins_of_char[j]):
            num_of_anagram += 1

print(num_of_anagram)
