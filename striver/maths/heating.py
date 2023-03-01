n = int(input())

for i in range(n):
    r, sec = map(int, input().split())
    if sec <= r:
        print(sec)
        continue

    cost = ((sec//r)**2)*(r-(sec%r)) + ((sec//r+1)**2)*(sec%r)
    print(cost)
    
    