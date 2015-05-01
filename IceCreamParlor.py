# https://www.hackerrank.com/challenges/icecream-parlor
T = int(input())
while T > 0:
    M = int(input())
    N = int(input())
    cost = list(map(int,input().split(" ")))
    i,j = 0,0
    found = False
    a,b = 0,0
    while i < len(cost) and found == False:
        j = i + 1
        while j < len(cost) and found == False:
            if cost[i]+cost[j]== M:
                found = True
                print("{0} {1}".format(i+1,j+1))
            j = j + 1
        i = i + 1
    T = T - 1
