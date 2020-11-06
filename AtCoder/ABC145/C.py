# -*- coding: utf-8 -*-

import numpy as np
import itertools as it

# Nの町

# 入力
# N
# x1 y1
# ...
# xn yn

N = int(input())
townpoints = np.empty((N, 2), dtype=np.int16)
distances = np.empty((N, N))

for i in range(N):
    line = input()
    townpoints[i] = list(map(int, line.split(' ')))

xx, xy = np.meshgrid(townpoints[:, 0], townpoints[:, 0])
yx, yy = np.meshgrid(townpoints[:, 1], townpoints[:, 1])

xdist = (xx - xy) ** 2
ydist = (yx - yy) ** 2

distances = (xdist+ydist)**0.5

# [(1,2,3), (2,1,3), ... ] all visit orders
orders = list(it.permutations(list(range(N))))

distance_list = np.empty((len(orders)))

for n, i in enumerate(orders):
    dist_tmp = 0
    for j in range(N-1):
        dist_tmp += distances[i[j], i[j+1]]
    distance_list[n] = dist_tmp

avg = distance_list.sum()/len(distance_list)

print(avg)
