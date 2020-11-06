# -*- coding: utf-8 -*-

N = int(input())
S = input()

num_of_slimes = 1
color_of_left = S[0]

for i in range(1, N):
    if S[i] != color_of_left:
        num_of_slimes += 1
    color_of_left = S[i]

print(num_of_slimes)
