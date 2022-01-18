def main():
	m = int(input('M: '))
	n = int(input('N: '))
	doc = open('Documents/mnozenje.txt', 'w')
	for y in range(m, n+1):
		doc.write(str(y)+'\t')
	doc.write('\n')
	for x in range(m, n+1):
		for y in range(m, n+1):
			doc.write(str(x*y)+'\t')
		doc.write('\n')
	doc.close()
	s1 = int(input('Zamijeni stupac: '))
	s2 = int(input('i stupac: '))
	doc = open('Documents/mnozenje.txt', 'r')
	linije = doc.readlines()
	doc.close()
	doc = open('Documents/mnozenje.txt', 'a')
	doc.write('\n')
	doc.write('Zamijenio {}. i {}. stupac\n'.format(s1, s2))
	for l in linije:
		brojevi = l.rstrip('\n').split('\t')
		btemp = brojevi[s1-1]
		brojevi[s1-1] = brojevi[s2-1]
		brojevi[s2-1] = btemp
		for b in brojevi[:-1]:
			doc.write(b+'\t')
		doc.write('\n')
	doc.close()

main()