tt = int(input())

for __ in range(tt):
    n = int(input())
    arr = list(map(int, input().split()))

    for i in range(n):
        if arr[i] == 1:
            arr[i] = 2
    for i in range(n-1):
        if arr[i+1]%arr[i] == 0:
            arr[i+1] += 1

    print(" ".join(str(x) for x in arr))