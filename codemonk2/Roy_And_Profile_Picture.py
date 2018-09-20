# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
L = int(input())
T = int(input())

while T > 0:
    W,H = map(int, input().split(" "))
    if min(W,H) < L:
        print("UPLOAD ANOTHER")
    elif W == H:
        print("ACCEPTED")
    else:
        print("CROP IT")
    T = T - 1
