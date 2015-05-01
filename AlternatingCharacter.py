# https://www.hackerrank.com/challenges/alternating-characters
T = int(input())
while T > 0 :
    str = input()
    count = 0
    i = 1
    curr = str[0]
    while i < len(str):
        if curr == str[i]:
            count = count + 1
        else:
            curr = str[i]
        i = i + 1    
    print(count)
    
    T = T - 1
