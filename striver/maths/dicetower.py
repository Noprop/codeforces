n = int(input())
arr = list(map(int, input().strip().split()))

for x in arr:
    if x < 15:
        print("NO")
        continue
    if 0 < (x%14) < 7:
        print("YES")
    else:
        print("NO")