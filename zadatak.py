from random import randrange

rijecnik = {}
izm = []

def prijevod(r):
	return rijecnik[r]

def razgovor():
	br = 0
	for p in range(3):
		print('Pitanje '+str(p))
		r = izm[randrange(0, 6)]
		br += len(r)
		print(r+'?')
		print('('+prijevod(r)+')\n')
		print('Odgovor '+str(p))
		br += len(prijevod(r))
		r = izm[randrange(0, 6)]
		br += len(r)
		print(r+'?')
		print('('+prijevod(r)+')\n')
		br += len(prijevod(r))
	return br

def main():
	hrv = ['crveno', 'plavo', 'jedan', 'osam', 'sutra', 'subota']
	slova = 'abcdefghijklmnopqrstuvwxyz'
	for hrvrijec in hrv:
		d = randrange(2, 8)
		r = slova[randrange(0, len(slova))]
		for i in range(d-1):
			s = slova[randrange(0, len(slova))]
			while s == r[-1]:
				s = slova[randrange(0, len(slova))]
			r = r + s
		rijecnik[r] = hrvrijec
		izm.append(r)

	print('ukupno '+str(razgovor())+' slova')

main()