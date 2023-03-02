import math
n = int(input())

for _ in range(n):
    s = input()
    t = input()

    lcm = (len(t)*len(s)) // math.gcd(len(t), len(s))
    
    s *= lcm//len(s)
    t *= lcm//len(t)
    if s == t:
        print(s)
    else:
        print(-1)

