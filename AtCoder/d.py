# -*- coding: utf-8 -*-

import numpy as np
import itertools

N = int(input())
L = list(map(int, input().split()))

L = np.array(L)
L.sort()

xx, yy = np.meshgrid(L, L)
vsum = xx + yy





