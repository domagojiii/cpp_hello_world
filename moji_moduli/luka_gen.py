import random

def slucajni(M, N, K):
	x = random.randint(M, N)
	while x%K != 0:
		print('krivi brojevi')
		x = random.randint(M, N)
	y = random.randint(M, N)
	while y%K != 0:
		print('krivi brojevi')
		y = random.randint(M, N)
	return (x, y)

gg = 200