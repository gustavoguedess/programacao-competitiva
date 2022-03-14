
n = int(input())
while n>0:
    n-=1
    palavra = input()
    l = input()

    saida = "NO"
    for i,_ in enumerate(palavra):
        if palavra[i]==l and i%2==0:
            saida = "YES"

    print(saida)
