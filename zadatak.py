def ispis_datum(d, m, g):
	print('Uneseni datum je {}.{}.{}'.format(d, m, g), end='')

def ispis_dan(d, m, g):
	x = d
	for i in range(m):
		if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12:
			x += 31
		if i == 2:
			x += 28
		if i == 4 or i == 6 or i == 9 or i == 11:
			x += 30
	print(' i to je {}. dan u godini.'.format(x))

def main():
	a = 1
	while a != 0:
		d = int(input('Unesite dan: '))
		m = int(input('Unesite mjesec: '))
		g = int(input('Unesite godinu: '))
		ispis_datum(d, m, g)
		ispis_dan(d, m, g)
		a = int(input('Za nastavak unesi 1, za kraj unesi 0: '))

main()