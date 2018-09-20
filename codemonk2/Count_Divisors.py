# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
l,r,k = map(int, input().split(' '))
# can be optimized
n = 0
for i in range(l,r+1):
    if i % k == 0:
        n = n + 1
print(n)
