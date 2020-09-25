a= float(input("Digite el valor de a en su ecuación cuadrática: "))
b= float(input("Digite el valor de b en su ecuación cuadrática: "))
c= float(input("Digite el valor de c en su ecuación cuadrática: "))

x1=((-b)+(((b**2)-4*a*c)**(0.5)))/(2*a)
x2=((-b)-(((b**2)-4*a*c)**(0.5)))/(2*a)

print("Las raíces de la ecuación son: ",x1,x2)
