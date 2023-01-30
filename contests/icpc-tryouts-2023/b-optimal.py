import sys
from sys import stdin
 
tt = int(stdin.readline())
 
ANS = 0
 
for loop in range(1):
    x = input().split()
    for r in x:
        r = int(r)
        h = 0
        for y in range(1, r+1):
            dist_at_y = 1 + 2*(((r**2 - y**2)**0.5)//1)
            h += dist_at_y*2

        h += 1 + r*2
        ANS += h

 
print(int(ANS % 1000000007))
# print (*ANS,sep="\n")