n = int(input())

if n%2:
    print(0)
else:
    out = n//4
    if n%4 == 0: out -= 1

    print(out)