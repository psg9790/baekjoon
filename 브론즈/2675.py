r = int(input())

for rt in range(r):
    s = list(input())
    for i in range(2, len(s)):
        for j in range(int(s[0])):
            print(s[i], end='')
