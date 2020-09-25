import math
a= float(input("digite elvalor de a: "))
b= float(input("digite elvalor de b: "))
c= float(input("digite elvalor de c: "))
d= float(-b+(math.sqrt(b**2-(4*a*c))))/(2*a)
e= float((-b)-(math.sqrt(b**2-(4*a*c))))/(2*a)
print("El resultado de la ecuación es: X1= ",d, "y X2= ",e)
