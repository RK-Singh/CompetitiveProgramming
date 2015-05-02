#https://www.hackerrank.com/challenges/restaurant/
def hcf(a,b):
    rem = a%b
    if rem == 0:
        return b
    return hcf(b,rem)

T = int(input())
while T > 0:
    n = list(map(int,input().split(" ")))
    print((n[0]*n[1])//(hcf(max(n),min(n))**2))
    T = T - 1 
