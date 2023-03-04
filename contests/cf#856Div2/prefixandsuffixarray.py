tt = int(input())

for __ in range(tt):
    n = int(input())
    arr = input().split()
    arr.sort(key=len)
    flag = True

    for i in range(0, len(arr), 2):
        if arr[i] != arr[i+1][::-1]:
            flag = False
            break
    
    if flag:
        print("YES")
    else:
        print("NO")