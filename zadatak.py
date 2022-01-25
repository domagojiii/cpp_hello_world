baza = '/Users/domagoj/a/glumice.txt'

def unos_zapisa():
	k = int(input('Kljuc >> '))
	ime = input('Unesi ime >> ')
	prezime = input('Unesi prezime >> ')
	doc = open(baza, 'r')
	linije = doc.readlines()
	for l in linije:
		if l.startswith(str(k)):
			print('Postoji zapis s istim kljucem')
			print('Ponovo pozovi naredbu za upis u bazu podataka')
			doc.close()
			return
	doc.close()
	doc = open(baza, 'a')
	doc.write(str(k)+'|'+ime+' '+prezime+'\n')
	doc.close()

def citanje_zapisa():
	doc = open(baza, 'r')
	linije = doc.readlines()
	for l in linije:
		print(l, end ='')
	doc.close()

def brisanje_zapisa():
	k = input('Unesi kljuc koji zelite obrisati >> ')
	doc = open(baza, 'r')
	linije = doc.readlines()
	doc.close()
	doc = open(baza, 'w')
	for l in linije:
		if not l.startswith(str(k)):
			doc.write(l)
	doc.close()

def main():
	n = -1
	while n != 0:
		print('Odaberite koju naredbu zelite izvrsiti u bazi podataka:')
		print('1. - unos zapisa')
		print('2. - citanje zapisa')
		print('3. brisanje zapisa')
		print('ZA IZLAZ - 0')
		n = int(input('>> '))
		if n == 1:
			unos_zapisa()
		if n == 2:
			citanje_zapisa()
		if n == 3:
			brisanje_zapisa()

main()