import math
n = int(input())

if n == 1 or n == 2:
    print("No")
else:
    print("Yes")
    if n%2:
        print(1, str(n//2 + n%2))
        set2 = [str(i) for i in range(1, n+1)]
        del set2[n//2]
        print(str(len(set2)), " ".join(set2))
    else:
        set1 = [str(x) for x in range(1, n//2, 2)]
        set1 += [str(x) for x in range(n//2+2, n+1, 2)]
        set2 = [str(x) for x in range(2, n//2+1, 2)]
        set2 += [str(x) for x in range(n//2+1, n, 2)]
        if len(set1) + len(set2) != n:
            set1 += [str(n//2)]
            set2 += [str(n)]
        print(str(len(set1)), " ".join(set1))
        print(str(len(set2)), " ".join(set2))