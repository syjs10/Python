def fib(maxs = 1):
	n, x, y = 0, 1, 1
	while n < maxs:
		yield y 
		x, y =y,  y + x
		n= n + 1
f = fib(6)
for x in range(6):
	print f.next()