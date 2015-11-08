def get_b(N, a):
	return (N*(N-2*a))//(2*(N-a))
def get_c(N, a, b):
	return N-a-b
def is_triplet(a,b,c):
	return ((a*a + b*b) == c*c)

T = int(input())
while T > 0:
	N = int(input())
	max_value = -1
	product = 1
	for a in range(1,N):
		b = get_b(N,a)
		c = get_c(N,a,b)
		if a>0 and b>0 and c>0 and is_triplet(a,b,c):
			product = a*b*c
			#print(a,b,c, product, max_value)
			if product > max_value:
				max_value = product

	print(max_value)
	T=T-1
