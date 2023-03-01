T = int(input())

for i in range(T):
    x,y = list(map(int, input().strip().split()))
    if x >= 4:
        print("YES")
    else:
        if x == 1:
            if y == 1:
                print("YES")
            else:
                print("NO")
        elif y <= 3:
            print("YES")
        else:
            print("NO")