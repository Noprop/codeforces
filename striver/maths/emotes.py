import math
n,m,k = map(int, input().split())
arr = list(map(int, input().split()))

arr = sorted(arr)
out = m//(k+1)*k*arr[-1] + m//(k+1)*arr[-2] + m%(k+1)*arr[-1]
print(int(out))