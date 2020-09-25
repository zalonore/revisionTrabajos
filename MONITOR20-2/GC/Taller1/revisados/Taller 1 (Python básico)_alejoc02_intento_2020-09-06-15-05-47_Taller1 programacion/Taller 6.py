numero = int(input("introduzca un número de 4 cifras: "))
primero = numero%10
paso2 = numero//10
segundo = paso2%10
paso3 = numero//100
tercero = paso3%10
cuarto = numero//1000
inverso = str(primero)+str(segundo)+str(tercero)+str(cuarto)
print("el numero inverso es: ",inverso)
