def novi_broj(a):
	x = a%10
	if x == 0:
		x = 1
	return x*100 + x*10 + x

def parni(x):
	if x%2 == 0:
		return True
	else:
		return False