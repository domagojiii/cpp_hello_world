import math

vrijeme_12_24 = int(input('Unesite prikaz vremena koje vas sat podrzava (24/12): '))
vrijeme = int(input('Unesite vrijeme koje prikazuje vas sat sada: '))
minute = int(input('Unesite trazene minute: '))
vrijeme_sastanka_sat = (vrijeme + 80) % vrijeme_12_24
vrijeme_sastanka_sat_minute = vrijeme_sastanka_sat + (minute / 60)
print('Tocno vrijeme sastanka zamaskirano decimalnim zapisom je: {:.3f}'.format(vrijeme_sastanka_sat_minute))
