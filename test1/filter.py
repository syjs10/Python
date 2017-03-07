def is_prime(num):
	for n in range(2,num/2+1):
		if num % n == 0:
			return False
	return True
print filter(is_prime, range(2,100))