h, m = map(int, input().split())
c = int(input())

m += c
if m >= 60:
    o = int(m/60)
    h += o
    m -= 60 * o
if h >= 24:
    h -= 24

print(str(h) + ' ' + str(m))
