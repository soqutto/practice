# -*- coding: utf-8 -*-

N = int(input())
S = input()

z_ascii = ord('Z')
S_ascii = map(ord, S)
S_ascii_new = []

for i in S_ascii:
    new = i+N
    S_ascii_new.append(new - 26 if new > z_ascii else new)

print(''.join(map(chr, S_ascii_new)))
