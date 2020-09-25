H=float(input("digite la altura de su triangulo rectangulo: "))
B=float(input("digite la base de su triangulo rectangulo: "))
A= round(B*H/2,2)
C= round(((B**2)+(H**2))**(1/2),2)
P=H+B+C
print("La area de su triangulo rectangulo es",A)
print("El perimetro de su triangulo rectangulo es",P)

