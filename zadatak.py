recenica = input("Upisi string:")
recenica = recenica.lower()

while '  ' in recenica:
	recenica = recenica.replace('  ', ' ')

recenica = recenica.replace(' .', '.')
br = recenica.count(' ') + 1

treca_rijec = ''

i = 1
poz = recenica.find(' ')
while poz != -1:
	i = i + 1
	if i == 4:
		treca_rijec = recenica[poz_old+1:poz]
	poz_old = poz
	poz = recenica.find(' ', poz+1)

if treca_rijec == treca_rijec[::-1]:
	je_nije = 'je'
else:
	je_nije = 'nije'

if br < 3:
	print('recenica ima manje od tri rijeci.')
else:
	print('recenica ima {} rijeci. treca rijec je {} i on {} palindrom.'.format(br, treca_rijec, je_nije))
