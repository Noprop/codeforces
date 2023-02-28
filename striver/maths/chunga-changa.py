x,y,z = map(int, input().strip().split())
rX = x%z
rY = y%z

minN = 0
if rX+rY >= z:
    minN = z-max(rX, rY)

print((x+y)//z, minN)