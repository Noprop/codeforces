tt = int(input())

for __ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))
    costs = []

    for i in range(0, n):
        cost = 1

        for j in range(i+1):
            if arr[i-j] >= j+1:
                cost = max(cost, j+1) 
            else:
                break
        costs.append(cost)
    
    print(" ".join(str(x) for x in costs))
