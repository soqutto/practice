# -*- coding: utf-8 -*-

A, B = map(int, input().split())

if A<=9 and B<=9:
    print("{}".format(A*B))
else:
    print("{}".format(-1))
