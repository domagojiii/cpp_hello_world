troznamenkasti_broj = int(input('unesi troznamenkasti broj:'))

i = 100
while i <= troznamenkasti_broj:
	prva_znamenka = i/100
	druga_znamenka = i/10%10
	treca_znamenka = i%10
	if prva_znamenka%2 == 1 and druga_znamenka%2 == 1 and treca_znamenka%3 == 0 and treca_znamenka != 0:
		print(i)
	i += 1