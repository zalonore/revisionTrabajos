print("Vamos a calcular el area y perimetro de un rectangulo:")
LadoA = float(input("Ingrese cuanto mide la base del rectangulo: "))
LadoB = float(input("Ingrese la altura del rectangulo: "))
Area = LadoA * LadoB
Perimetro = ((LadoA * 2) + (LadoB * 2))
print ("El area del rectangulo es:", round(Area, 2 ))
print ("El perimetro del rectangulo es:", round(Perimetro, 2 ))
