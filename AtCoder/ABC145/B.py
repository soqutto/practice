# -*- coding: utf-8 -*-

# N: 正の整数
N = int(input())
# S: 長さNの英小文字からなる文字列S
S = input()

if(N % 2 != 0):
    print("No")
else:
    t1 = S[0: N//2]
    t2 = S[N//2:  ]
    if t1 == t2:
        print("Yes")
    else:
        print("No")


