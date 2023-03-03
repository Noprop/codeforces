import math
tt = int(input())

for _ in range(tt):
    n,m,k = map(int, input().split())

    cpp = n//k
    if m <= cpp:
        print(m)
    else:
        out = cpp - math.ceil((m-cpp)/(k-1))
        print(out)