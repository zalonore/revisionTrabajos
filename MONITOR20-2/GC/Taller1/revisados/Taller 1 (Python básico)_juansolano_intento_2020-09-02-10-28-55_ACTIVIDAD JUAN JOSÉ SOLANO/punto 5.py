


print("punto 5 fórmula cuadrática")
a = float(input("Digite el coeficiente de la variable al cuadrado: "))
b = float(input("Digite el coeficiente de la variable sencilla: "))
c = float(input("Digite el término sin variable: "))
x1 = (-b +(b**2 -4*a*c)**0.5)/2*a
x2 = (-b -(b**2 -4*a*c)**0.5)/2*a
print("Los ceros de su función son: ", x1, "y ", x2)
