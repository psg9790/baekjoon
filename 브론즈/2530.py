h, m, s = map(int, input().split())
cs = int(input())

s += cs

if s >= 60:
    e = int(s/60)
    m += e
    s -= e*60

if m >= 60:
    e = int(m/60)
    h += e
    m -= e*60

if h >= 24:
    e = int(h/24)
    h -= 24 * e

print(str(h)+' '+str(m)+' '+str(s))
