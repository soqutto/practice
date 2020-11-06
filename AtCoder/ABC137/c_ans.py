# -*- coding: utf-8 -*-

import numpy as np

N = int(input())
S = []
hash_table = {}

a_ascii = ord('a')
bins_of_char = np.zeros((N, 26),dtype=np.int)
num_of_anagram = 0

for i in range(N):
    S.append(''.join(sorted(input())))
S = sorted(S)

for i in range(N):
    if S[i] in hash_table:
        num_of_anagram += hash_table[S[i]]
        hash_table[S[i]] += 1
    else:
        hash_table[S[i]] = 1


print(num_of_anagram)
