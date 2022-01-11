from random import randrange

def napuni_spil():
	s = []
	for i in range(4):
		s.append(7)
		s.append(8)
		s.append(9)
		s.append(10)
		s.append('Decko')
		s.append('Dama')
		s.append('Kralj')
		s.append('As')
	return s

def par_tris_poker(l):
	par = 0
	tris = 0
	poker = 0
	k = [7, 8, 9, 10, 'Decko', 'Dama', 'Kralj', 'As']
	for i in k:
		if l.count(i) == 2:
			par += 1
		if l.count(i) == 3:
			tris += 1
		if l.count(i) == 4:
			poker += 1
	return [par, tris, poker]

def main():
	rijecnik = {'9':0, '10':0, 'Decko':0, 'Dama':0}
	s = [napuni_spil(), napuni_spil(), napuni_spil(), napuni_spil(), napuni_spil()]
	for i in range(10):
		l = []
		for j in range(5):
			k = randrange(0, len(s[j]))
			l.append(s[j][k])
			s[j].pop(k)
		r = par_tris_poker(l)
		print("{} igra ['P-{}', 'T-{}', 'PK-{}']".format(i+1, r[0], r[1], r[2]))
		for x in l:
			if x == 9:
				rijecnik['9'] = rijecnik['9'] + 1
			if x == 10:
				rijecnik['10'] = rijecnik['10'] + 1
			if x == 'Decko':
				rijecnik['Decko'] = rijecnik['Decko'] + 1
			if x == 'Dama':
				rijecnik['Dama'] = rijecnik['Dama'] + 1
	print("Ukupno izvucene karte: {}".format(rijecnik))

main()