n = int(input())
arr = list(map(int, input().split()))

arr.sort()
arr[-1], arr[-2] = arr[-2], arr[-1]

flag = True 

for i in range(1, n-1):
    if arr[i-1] + arr[i+1] <= arr[i]:
        flag = False
        break
if arr[-2] + arr[0] <= arr[-1]:
    flag = False

if flag:
    print("YES")
    print(" ".join([str(x) for x in arr]))
else:
    print("NO")