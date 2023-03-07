import math
n = int(input())
in_piles = list(map(int, input().split()))

m = int(input())
worms = list(map(int, input().split()))

piles = [0]

for i in range(n):
    piles.append(piles[-1]+1)
    piles.append(in_piles[i]-1+piles[-1])
piles.remove(0)

for k in range(m):
    i,j = 0,len(piles)-1
    
    while i<j:
        mid = (i+j)//2
        if worms[k] > piles[mid]:
            i = mid+1
        else:
            j = mid
    
    print(math.ceil((i+1)/2))


'''
6
2 7 3 4 9 1
3
1 26 11

'''