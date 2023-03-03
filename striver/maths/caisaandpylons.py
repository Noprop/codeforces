n = int(input())

arr = list(map(int, input().split()))
arr.insert(0, 0)
running = 0
low = 0-arr[1]

for i in range(len(arr)-1):
    running += arr[i]-arr[i+1]
    low = min(low, running)

print(abs(low))