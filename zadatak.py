import math

def diskriminanta(a,b,c):
	d = math.pow(b,2) - 4*a*c
	if d > 0:
		return d
	else:
		return 0

def predznak(x):
	return x*(-1)

def umnozak_nultocki(a,b,c):
	return ((predznak(b) + math.sqrt(diskriminanta(a,b,c)))/(2*a)) * ((predznak(b) - math.sqrt(diskriminanta(a,b,c)))/(2*a))

def main():
	a = int(input('unesi a:'))
	b = int(input('unesi b:'))
	c = int(input('unesi c:'))
	while a != 0 and b != 0 and c != 0:
		print(umnozak_nultocki(a,b,c))
		a = int(input('unesi a:'))
		b = int(input('unesi b:'))
		c = int(input('unesi c:'))

main()