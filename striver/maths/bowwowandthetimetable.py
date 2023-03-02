import math
s = input()

out = (len(s)//2)
if len(s)%2 and s.count('1') > 1:
    out += 1
print(out)