import sys

sys.path.append('/Users/domagoj/CPP/cpp_hello_world/moji_moduli')

import luka_gen
import luka_test

def main():
	m = int(input('unesi prvi broj:'))
	n = int(input('unesi drugi broj:'))
	d = int(input('unesi djelitelj:'))
	t = luka_gen.slucajni(m,n,d)
	a = t[0]
	b = t[1]
	print('generirano {} {}'.format(a, b))
	a1 = luka_test.novi_broj(a)
	b1 = luka_test.novi_broj(b)
	print('kreirani brojevi {} {}'.format(a1, b1))
	r = a1 - b1
	if a1 < b1:
		r = b1 - a1
	print('razlika je {}'.format(r))
	if luka_test.parni(r):
		print('broj je paran')
	else:
		print('broj je neparan')
	if r > luka_gen.gg:
		print('{} je veca od {}'.format(r, luka_gen.gg))
	else:
		print('{} je manja od {}'.format(r, luka_gen.gg))

main()