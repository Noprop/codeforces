T = int(input())

for i in range(T):
    r,g,b,w = map(int, input().split())

    odds = r%2 + g%2 + b%2 + w%2
    evens = 4-odds

    if evens >= 3:
        print("Yes")
    elif evens == 2:
        print("No")
    elif r>0 and g>0 and b>0:
        print("Yes")
    else:
        print("No")