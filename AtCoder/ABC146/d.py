# -*- coding: utf-8 -*-
import numpy as np

N = int(input())
a = np.empty((N-1), dtype=np.uint32)
b = np.empty((N-1), dtype=np.uint32)

for i in range(0,N-1):
    a[i], b[i] = map(int, input().split())
    a[i] -= 1
    b[i] -= 1

connect_N = np.zeros((N), dtype=np.uint32)
connect_P = np.empty((N), dtype=object)

for i in range(0,N):
    l = []
    for j in range(0,N-1):
        if(a[j] == i):
            connect_N[i] += 1
            l.append(b[j])
        if(b[j] == i):
            connect_N[i] += 1
    connect_P[i] = l

colors_max = np.max(connect_N)
colors = np.arange(0, colors_max)
colors_in_use = np.full((N), [], dtype=object)

for i in range(0,N):
    for j in connect_P[i]:
        colors_in_use.

