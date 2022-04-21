t = int(input())
for _ in range(t):
    n = int(input())
    oc = {}
    resp = -1
    
    l = input().split()
    for s in l:
        s = int(s)
        if s not in oc:
            oc[s] = 0
        oc[s] += 1
        if oc[s] == 3:
            resp = s
    print(resp)

        