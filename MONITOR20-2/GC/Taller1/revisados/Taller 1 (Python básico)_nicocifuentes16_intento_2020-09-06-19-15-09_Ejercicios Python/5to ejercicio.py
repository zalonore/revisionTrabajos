import math
a= float(input("digite el valor de a "))
b= float(input("digite el valor de b "))
c= float(input("digite el valor de c "))
y= (b**2)-4*a*c
x= math.sqrt(y)
x1= (-b-(x))/(2*a)
x2= (-b+(x))/(2*a)
print("El primer resultado (x1) es ", x1)
print("El segundo resultado (X2) es ", x2)
