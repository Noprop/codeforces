import math
tt = int(input())

for _ in range(tt):
    x,y = map(int, input().split())
    a,b = map(int, input().split())
    if x>y: x,y = x,y
    tot = 0

    if x<0 and y>0:
        tot += abs(x)*a + y*b
    else:
        x = abs(x)
        y = abs(y)
        tot1 = 0
        tot2 = 0
        tot1 += (max(x,y)-min(x,y))*a
        tot1 += min(x,y)*b
        tot2 += max(x,y)*a
        tot2 += min(x,y,)*a
        tot = min(tot1, tot2)
    
    print(tot)