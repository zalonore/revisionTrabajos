print ("Punto 6")
número=int(input("Digite un número entero de 4 cifras: "))

primerosTres=número//10
primerosDos=número//100

primerDigito=número//1000
segundoDigito=primerosDos%10
tercerDigito=primerosTres%10
cuartoDigito=número%10

completoInvertido=(str(cuartoDigito)+str(tercerDigito)+str(segundoDigito)+str(primerDigito))
númeroInvertido=int(completoInvertido)
print("El número invertido es: ",númeroInvertido)
