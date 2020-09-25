import math
a=float(input("ingrse la variable A:"))
b=float(input("ingrse la variable B:"))
c=float(input("ingrse la variable C:"))

x1=(-b+(math.sqrt(b**2-4*a*c)))/(2*a)
x2=(-b-(math.sqrt(b**2-4*a*c)))/(2*a)
print("el resultado de la ecucion cuadratica cuando es una suma es:",x1)
print("el resultado de la ecucion cuadratica cuando es una resta es:",x2)
