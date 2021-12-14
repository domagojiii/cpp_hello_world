recenica = input("Upisi string:")
a = recenica.count('a')
e = recenica.count('e')
i = recenica.count('i')
o = recenica.count('o')
u = recenica.count('u')
samoglasnici = a+e+i+o+u
print('a {}, e {}, i {}, o {}, u {}'.format(a, e, i, o, u))
razmaci = recenica.count(' ')
suglasnici = len(recenica) - samoglasnici - razmaci - 1
if suglasnici > samoglasnici:
	print('Ukupna brojka samoglasnika je manja od suglasnika i ona iznosi {}'.format(samoglasnici))
if suglasnici == samoglasnici:
	print('Ukupna brojka samoglasnika je jednak kao suglasnika i ona iznosi {}'.format(samoglasnici))
if suglasnici < samoglasnici:
	print('Ukupna brojka samoglasnika je veca od suglasnika i ona iznosi {}'.format(samoglasnici))