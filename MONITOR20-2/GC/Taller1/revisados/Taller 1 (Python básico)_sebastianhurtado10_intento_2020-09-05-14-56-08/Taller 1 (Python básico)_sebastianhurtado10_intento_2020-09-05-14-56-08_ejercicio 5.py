#Ecuación cuadratica
import math

a = int(input(" Escriba un coeficiente a: "))
b = int(input(" Escriba un coeficiente b: "))
c = int(input(" Escriba un coeficiente c: "))
discriminante = b**2-4*a*c
if discriminante >= 0:
    x_1 =(-b+math.sqrt(discriminante))/2*a
    x_2 =(-b-math.sqrt(discriminante))/2*a
    print(f"si es positivo {x_1}, y,  si es negativo {x_2}")
else:
    print("Esta operacion no se puede realizar")

