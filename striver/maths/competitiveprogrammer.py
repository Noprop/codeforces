n = int(input())

for i in range(n):
    s = input()
    even = 0
    zero = 0
    if int(s)%3:
        print('cyan')
        continue
    for c in s:
        if not int(c)%2:
            even += 1
        if c == '0':
            zero += 1
    
    if zero > 0 and even > 1:
        print('red')
    else:
        print('cyan')

