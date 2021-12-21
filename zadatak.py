from random import randrange

def lista_slova(n):
	slova = 'bcdfghjklmnpqrstvwxyz'
	l = [slova[randrange(0, len(slova))] for i in range(n)]
	print(l)
	return l

def koliko_puta(l, s):
	x = 0
	for i in l:
		if i == s:
			x += 1
	return x 

def main():
	n = int(input('Unesite broj slova: '))
	s = input('Unesite slovo: ')
	l = lista_slova(n)
	print('Slovo {} pojavilo se {} puta.'.format(s, koliko_puta(l, s)))
	if s in l:
		for x, y in enumerate(l):
			if s == l[x]:
				print('Redni broj pojave: na {}. poziciji.'.format(x))
				print('Kreirao rijec: ', end='')
				for i in l[x:] + l[:x]:
					print(i, end='')
				print()
				break

	slovo = ''
	broj_slova = 1000
	for a in l:
		if koliko_puta(l, a) < broj_slova:
			slovo = a
			broj_slova = koliko_puta(l, a)
	for x, y in enumerate(l):
		if slovo == l[x]:
			print('U listi se slovo {} pojavilo najmanje puta - {} puta - redni broj pojave je {}. pozicija'.format(slovo, broj_slova, x))
			break

main()