numero = int(input('Escribe un número entero de cuatro dígitos: '))

tresPrimeros = (numero//10)
dosPrimeros = (numero//100)

primero = (numero//1000)
segundo = (dosPrimeros%10)
tercero = (tresPrimeros%10)
cuarto = (numero%10)

valorInverso = (str(cuarto)+str(tercero)+str(segundo)+str(primero))
resultado = int(valorInverso)
print('El número invertido es: ',resultado)
