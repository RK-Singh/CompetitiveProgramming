# https://www.hackerrank.com/contests/projecteuler/challenges/euler001
T = int(input())
while T > 0 :
    N = int(input())
    count = 0
    minus = 0
    n = (N-1)//3
    count = 3 * (n * (n + 1) // 2)
    n = (N-1)//5
    count = count + 5 * (n * (n + 1) // 2)
    n = (N-1)//15
    minus = 15 * (n * (n + 1) // 2)
    count = count - minus
    print(count)
    T = T - 1

