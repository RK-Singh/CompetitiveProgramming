# https://www.hackerrank.com/challenges/find-digits
# sanayaima10@yahoo.in
T = int(input())
while T > 0 :
    N = int(input()) 
    T = T-1 
    q = N
    rem = 0
    count = 0
    while q > 0 :
        rem = q % 10
        q = q // 10
        if rem != 0 :
            if N % rem == 0 :
                count = count + 1
    print(count)
    
