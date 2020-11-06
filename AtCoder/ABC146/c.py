# -*- coding: utf-8 -*-
import math
import sys
sys.setrecursionlimit(10000)

A, B, X = list(map(int, input().split()))

MIN = 1
MAX = 10 ** 9

step = 0

def price(N):
    dn = math.floor(math.log10(N)+1)
    return A * N + B * dn

def recursive_find(left, right):
    global step
    step += 1
    a, b = left, (right+left)//2
    c, d = (right+left)//2 + 1, right

    canbuy_a = (price(a) <= X)
    canbuy_b = (price(b) <= X)
    canbuy_c = (price(c) <= X)
    canbuy_d = (price(d) <= X)

    if(canbuy_c and canbuy_d):
        return d
    elif(canbuy_c and not canbuy_d):
        if (d-c==1):
            return c
        else:
            m = recursive_find(c, d)
    elif(canbuy_b and not canbuy_c):
        return b
    elif(canbuy_a and not canbuy_b):
        if (b-a==1):
            return a
        else:
            m = recursive_find(a, b)
    elif(not canbuy_a and not canbuy_b):
        return 0

    return m

m = recursive_find(MIN, MAX)

print(m)
