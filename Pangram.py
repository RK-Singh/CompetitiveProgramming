# https://www.hackerrank.com/challenges/pangrams
s = input()
a = "abcdefghijklmnopqrstuvwxyz"
s=s.lower()
i = 0
while i < 26:
    if a[i] not in s:
        print("not pangram")
        exit(0)
    i = i + 1
print("pangram")
    

