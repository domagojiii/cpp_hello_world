a = input('unesi prvi broj:')
b = input('unesi drugi broj:')
c = input('unesi treci broj:')

broj_trokuta = 0
broj_istokracnih_trokuta = 0

while a != 0 and b != 0 and c != 0:
	if a + b < c or a + c < b or b + c < a:
		print('Ucitane duljine stranica ne cine trokut')
	else:
		print('Ucitane su stranice trokuta a = {:.2f}, b = {:.2f}, c = {:.2f}'.format(a, b, c))
		opseg = a + b + c
		print('Opseg trokuta je {:.2f}'.format(opseg)
		broj_trokuta += 1
		if a == b or b == c or c == a:
			broj_istokracnih_trokuta += 1

	a = input('unesi prvi broj:')
	b = input('unesi drugi broj:')
	c = input('unesi treci broj:')

print('Bilo je ukupno {} trokuta od kojih je {} istokracna trokuta'.format(broj_trokuta, broj_istokracnih_trokuta))