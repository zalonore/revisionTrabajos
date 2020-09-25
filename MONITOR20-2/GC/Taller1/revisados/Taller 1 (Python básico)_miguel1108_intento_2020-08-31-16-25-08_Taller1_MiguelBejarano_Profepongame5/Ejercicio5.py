a=float(input("Ingrese su variable a:"))
b=float(input("ingrese su variable b:"))
c=float(input("ingrese su variable c:"))

x1=(-b+((b**2)-(4*a*c))**(1/2))/(2*a)

x2=(-b-((b**2)-(4*a*c))**(1/2))/(2*a)

if((b**2)-4*a*c)<0:
    print("No hay solucion en la recta real")
else:
    x1=(-b+((b**2)-(4*a*c))**(1/2))/(2*a)
    x2=(-b-((b**2)-(4*a*c))**(1/2))/(2*a)
    print("El valor positivo de su ecuacion cuadratica es:",x1)
    print("El valor negativo de su ecuacion cuadratica es:",x2)
      

print("""
Lo que hice fue establecer variables impuestas por el usuario despues asignar un condicional en caso de que el producto de la raiz sea menor que cero que imprima
/no pertenece a la recta real/ y de lo contrario solo operar de manera normal
""")


