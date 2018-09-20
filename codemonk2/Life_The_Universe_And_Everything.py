# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/
while True:
    try:
        n = int(input())
        if n == 42:
            break
        print(n)
    except:
        break
