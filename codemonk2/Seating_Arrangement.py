# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
seats = { 1 : [12, 'WS'],2: [11, 'MS'],3: [10, 'AS'],
         4 : [9 , 'AS'],5: [8 , 'MS'],6: [7 , 'WS'],
         7 : [6 , 'WS'],8: [5 , 'MS'],9: [4 , 'AS'],
         10: [3 , 'AS'],11:[2 , 'MS'],12:[1 , 'WS']}
T = int(input())
while T > 0:
	seat = int(input())
	q , r = divmod(seat, 12)
	if r == 0:
		r = 12
		q = q - 1
	s = seats[r]
	print(s[0] + q * 12, s[1])
	T = T - 1
