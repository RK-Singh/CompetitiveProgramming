# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
N = int(input())
factorial = 1
for n in range(1, N+1):
    factorial = factorial * n
print(factorial)
