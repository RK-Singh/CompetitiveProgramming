# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/
isbn = list(map(int, input()))
total = 0
for index, value in enumerate(isbn):
    total = total + value * (index + 1)
print('Legal ISBN' if total % 11 == 0 else 'Illegal ISBN')
