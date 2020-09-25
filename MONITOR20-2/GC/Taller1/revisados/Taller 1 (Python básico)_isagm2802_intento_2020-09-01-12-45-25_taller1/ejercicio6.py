numeroEntero = int(input( "ingrese un numero entero de 4 digitos: "))
digito1 = numeroEntero//1000
digito2 = numeroEntero%10
digito3 = numeroEntero//10%10
digito4 = numeroEntero//100%10

completo = (str(digito2)+str(digito3)+str(digito4)+str(digito1))
print (completo)
