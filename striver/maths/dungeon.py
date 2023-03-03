tt = int(input())

for __ in range(tt):
    a,b,c = map(int, input().split())

    tot = a+b+c
    if tot%9:
        print("NO")
    else:
        if min(a,b,c) < tot/9:
            print("NO")
        else:
            print("YES")