a = float(input("Digite el valor de a: "))
b = float(input("Digite el valor de b: "))
c = float(input("Digite el valor de c: "))
xp = (-b+(((b**2)-(4*a*c))**(1/2)))/(2*a)
xn = (-b-(((b**2)-(4*a*c))**(1/2)))/(2*a)

print("El resultado de X con la operación en positivo es: ",xp)
print("El resultado de X con la operación en negativo es: ",xn)
