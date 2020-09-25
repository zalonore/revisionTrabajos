a = float(input("De el valor de la variable a"))
b = float(input("De el valor de la variable b"))
c = float(input("De el valor de la variable c"))

x1 = (-b-(b**2-4*a*c)**(1/2))/(2*a)
x2 = (-b+(b**2-4*a*c)**(1/2))/(2*a)

print ("La solucion negativa es:",x1)
print ("La solucion positiva es:",x2)

