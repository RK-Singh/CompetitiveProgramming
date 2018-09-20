# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
S = input()
S = [ s.lower() if s.isupper() else s.upper() for s in S]
print("".join(S))
