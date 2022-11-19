t = int(input())

for i in range(t):
    asd = list(map(str, input().split()))
    res = float(asd[0])
    for j in range(len(asd)-1):
        if asd[j+1] == '@':
            res *= 3
        if asd[j+1] == '#':
            res -= 7
        if asd[j+1] == '%':
            res += 5
    print('{:.2f}'.format(res))
