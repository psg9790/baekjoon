from sys import stdin

n = list(map(int, stdin.readline().split()))
t = list(map(int, stdin.readline().split()))
change = 0

max_eat = sum(n)
for _ in range(2):
    for i in range(3):
        gom = n[i] - t[i]
        if gom >= 0:
            n[i] = gom
            t[i] = 0
        else:
            n[i] = 0
            try:
                t[i+1] += -gom//3
            except:
                t[0] += -gom//3

no_eat = sum(n)
if no_eat > 0:
    print(max_eat-no_eat)
else:
    print(max_eat)
