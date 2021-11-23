import math

def polumjer():
	r = input('Koliki je radijus kruznice:')
	if r > 0:
		return r
	else:
		return 0

def opseg(r):
	return 2*r*math.pi

def povrsina(r):
	return math.pow(r,2)*math.pi

x = 0
while x == 0:
	x = polumjer()
	if x == 0:
		print('Ponovite, unos je <= 0')
print('Kruznica je opsega {:.1f} cm, te povrsine {:.1f} cm^2'.format(opseg(x), povrsina(x)))