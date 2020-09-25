from math import sqrt
a = int(input("Digite el valor de a: "))
b = int(input("Digite el valor de b: "))
c = int(input("Digite el valor de c: "))

solucion1 = (-b+(sqrt(b**2)-(4*a*c)))/(2*a)
solucion2 = (-b-(sqrt(b**2)-(4*a*c)))/(2*a)

print("La raiz de x1 es: ", solucion1)
print("La raiz de x2 es; ", solucion2)
