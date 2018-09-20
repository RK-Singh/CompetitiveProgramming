# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
N = int(input())
A = list(map(int, input().split(" ")))
result = 1
for a in A:
    result = (result * a) % (10**9 +7)
print(result)
