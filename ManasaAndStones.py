# https://www.hackerrank.com/challenges/manasa-and-stones
T = int(input())
while T > 0:
    N = int(input())
    a = int(input())
    b = int(input())
    n = 0
    result = set([])
    while n < N:
        result.add(n*a+(N-n-1)*b)
        n = n + 1
    l = sorted(result)
    for x in range(len(l)):
        print(l[x],end=' ')
    
    print()
    
    T = T - 1
    
