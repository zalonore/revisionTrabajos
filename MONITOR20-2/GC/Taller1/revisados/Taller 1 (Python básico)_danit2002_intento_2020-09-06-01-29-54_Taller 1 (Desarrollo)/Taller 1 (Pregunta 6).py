Numero = int(input("Por favor ingrese un numero entero de 4 cifras"))

PCifra = (Numero // 1000)
UCifra = (Numero % 10)
Cifra1 = (Numero // 100)
SCifra = (Cifra1 % 10)
Cifra2 = (Numero % 100)
TCifra = (Cifra2 // 10)

Numero = str(UCifra)+ str(TCifra)+ str(SCifra)+ str(PCifra)

Numero = int(Numero)

print (Numero)


