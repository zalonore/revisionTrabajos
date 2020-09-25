numero = int(input('Ingrese un numero entero de 4 cifras: '))
digito1 = numero//1000
digito2 = (numero//100)%10
digito3 = ((numero//10)%100)%10
digito4 = numero%10

reves = (str(digito4)+str(digito3)+str(digito2)+str(digito1))
completo = int(reves)
print ('el numero invertido es: ',completo)
