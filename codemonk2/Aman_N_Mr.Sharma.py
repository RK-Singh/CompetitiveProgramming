# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
d = int(input())
n = 0
while d > 0:
    r, x = map(int, input().split(" "))
    if (100*x) >= (2 * 22 * r // 7):
        n = n + 1
    d = d - 1
print(n)
