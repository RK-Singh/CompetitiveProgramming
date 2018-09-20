# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/

def is_prime(n):
    if n == 2:
        return True
    for i in range(2, (n//2) + 1):
        if n % i == 0:
            return False
    return True
            

N = int(input())

for n in range(2, N):
    if is_prime(n):
        print(n, end = ' ')
