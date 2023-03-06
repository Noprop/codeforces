for t in range(int(input())):
    a,k = map(int, input().split())

    for i in range(k-1):
        max_d = int(max(str(a)))
        min_d = int(min(str(a)))
        if min_d == 0:
            break
        a = a + (max_d * min_d)
    print(a)