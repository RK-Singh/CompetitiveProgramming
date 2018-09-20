# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/description/
T = int(input())
while T > 0:
    s1 = input()
    s2 = input()
    
    d1 = dict()
    d2 = dict()
    
    n = 0
    
    for l in s1:
        if l not in d1:
            d1[l] = 0
        d1[l] = d1[l] + 1
    
    for l in s2:
        if l not in d2:
            d2[l] = 0
        d2[l] = d2[l] + 1
    
    for key, value in d1.items():
        if key in d2.keys():
            n = n + abs(value - d2[key])
            del d2[key]
        else:
            n = n + value
    
    for key, value in d2.items():
        n = n + value
            
    print(n)
    
    T = T - 1
