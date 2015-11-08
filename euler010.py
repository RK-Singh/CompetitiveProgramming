# euler010
def isPrime(N):
	if N <= 1:
		return False
	elif N <= 3:
		return True
	elif N%2 == 0 or N%3 == 0:
		return False
	else:
		i = 5
		while (i*i) <= N:
			if N%i == 0 or N%(i+2) == 0:
				return False
			i = i + 6
		return True

primes = [x for x in range(1000010) if isPrime(x)]

print(len(primes))