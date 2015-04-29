#https://www.hackerrank.com/contests/projecteuler/challenges/euler003
def prime_factors(n):
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n = n// d
        d = d + 1
        if d*d > n:
            if n > 1: factors.append(n)
            break
    return factors

T = int(input())
while T > 0:
    N = int(input())
    print(max(prime_factors(N)))
    T = T - 1
