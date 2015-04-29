# https://www.hackerrank.com/challenges/fibonacci-modified

line = input()
A,B,N = map(int,line.split(" "))
n = 2
while(n < N):
    temp = B**2 + A
    A = B
    B = temp
    n = n + 1
print(B)
