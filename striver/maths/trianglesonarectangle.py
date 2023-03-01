T = int(input())

for _ in range(T):
    l,h = map(int, input().strip().split())
    bot = list(map(int, input().strip().split()))[1:]
    top = list(map(int, input().strip().split()))[1:]
    left = list(map(int, input().strip().split()))[1:]
    right = list(map(int, input().strip().split()))[1:]

    vert = max(max(bot)-min(bot), max(top)-min(top))*h
    horz = max(max(left)-min(left), max(right)-min(right))*l
    print(max(vert, horz))