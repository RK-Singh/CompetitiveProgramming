#https://www.hackerrank.com/challenges/restaurant/
def hcf(a,b):
    if a%b == 0:
        return b
    return hcf(b,a%b)

T = int(input())
while T > 0:
    n = list(map(int,input().split(" ")))
    print((n[0]*n[1])//(hcf(max(n),min(n))**2))
    T = T - 1 
