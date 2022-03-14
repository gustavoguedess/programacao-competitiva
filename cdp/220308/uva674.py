coins = [50, 25, 10, 5, 1]

while True:
    try:
        c = int(input())
    except EOFError:
        break
    s=0
    for coin in coins:
        s+=c//coin
        c=c%coin
    print(s) 
