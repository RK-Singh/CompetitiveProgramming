# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
T = int(input())

while T > 0:
    S1, S2 = input().split()
    print('YES' if sorted(S1) == sorted(S2) else 'NO')
    T = T - 1
