# https://www.hackerrank.com/challenges/maximizing-xor
l = int(input())
r = int(input())
i,j = l,0
m = 0
while i <= r and i <= 10**3 and i >= 1:
    j = i
    while j <= r and j <= 10**3 and i >= 1:
        t = i^j
        if t > m:
            m = t
        j = j + 1
    i = i + 1
print(m)
