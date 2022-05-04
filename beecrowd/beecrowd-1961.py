p, n = map(int, input().split())

alt = list(map(int, input().split()))

win = True
for i in range(1, n):
    diff = max(alt[i], alt[i-1])-min(alt[i], alt[i-1])
    if diff>p:
        win=False

if win:
    print('YOU WIN')
else:
    print('GAME OVER')