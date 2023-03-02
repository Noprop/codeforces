import math
a,b,c = map(int, input().split())

c -= abs(a)+abs(b)
if c%2 or c<0:
    print("No")
else:
    print("Yes")