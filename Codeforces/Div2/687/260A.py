def add(a,b):
    for i in range(10):
        nn = (a*10 +i)
        if nn%b == 0:
            return (True, nn)
    return (False, -1)


a, b, n = map(int, input().split())

poss, ans = add(a,b)
n-=1

if not poss:
    print(ans)
else:
    pack = [ '0' for i in range(n) ]
    pack = ''.join(pack)
    ans = str(ans)+pack
    print(ans)
