s = input()

reqs = [s.count('B'), s.count('S'), s.count('C')]
ingr = list(map(int, input().split()))
cost = list(map(int, input().split()))
cash = int(input())

i, j = 0, 10000000000000
mid = (i+j)//2
while i < j:
    mid = (i+j)//2
    tot_cost = sum([max(0, reqs[i]*mid-ingr[i])*cost[i] for i in range(3)])

    if tot_cost > cash:
        j = mid
    else:
        i = mid+1

print(i-1)

'''
BB
2 1 1
100 100 100
5
'''