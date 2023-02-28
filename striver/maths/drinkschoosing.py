n, k = map(int, input().strip().split())
favs = [0]*k

for i in range(n):
    x = int(input())
    favs[x-1] += 1

count = 0
for x in favs:
    if x%2:
        count += (x-1)
    else:
        count += x

sets = n//2 + n%2
print(count+(sets-count//2))