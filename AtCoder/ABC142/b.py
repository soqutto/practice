# -*- coding: utf-8 -*-

N, K = map(int, input().split())
H = map(int, input().split())

num_of_can_ride = 0

for hi in H:
    if hi >= K:
        num_of_can_ride += 1

print(num_of_can_ride)

