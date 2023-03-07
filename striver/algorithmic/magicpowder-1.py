n,k = map(int, input().split())
reqs = list(map(int, input().split()))
ingr = list(map(int, input().split()))

i,j = 0,100000000

while i<j:
    mid = (i+j)//2
    tot = sum([max(0, (reqs[x]*mid-ingr[x])) for x in range(n)])
    if tot < k:
        i = mid+1
    else:
        j = mid

if sum([max(0, (reqs[x]*i-ingr[x])) for x in range(n)]) > k:
    print(i-1)
else:
    print(i)