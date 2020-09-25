import math
a= float(input("Digíte el valor de a:"))
b= float(input("Digíte el valor de b:"))
c= float(input("Digíte el valor de c:"))
d=(b**2)-(4*a*c)
X1=(-b-(math.sqrt(d)))/(2*a)
X2=(-b+(math.sqrt(d)))/(2*a)

print("El valor de X1=",X1)
print("El valor de X2=",X2)
