import math
t = int(input())

for _ in range(t):
    n,s = map(int, input().split())
    out = math.ceil(s/n)

    if n>s:
        s *= math.ceil(n/s)
        out = math.ceil(s/n)
    print(out)