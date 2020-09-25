#Punto numero 1
print ("PRIMER PUNTO")
print (''' \ | /
  @ @
\ """ /
''')
#/////////////////////////////
#Punto numero 2
print ("-----------------------------------------------------------")
print ("SEGUNDO PUNTO")
print("Digite 2 números")
n1 = float(input("Primer numero: "))
n2 = float(input("Segundo numero: "))
suma = n1 + n2
resta = n1 - n2
multi = n1 * n2
divi = n1 / n2
poten = n1 ** n2
print("La Suma de los 2 digitos es:", suma)
print("La Resta de los 2 digitos es:", resta)
print("La Multiplicación de los 2 digitos es:", multi)
print("La División de los 2 digitos es:", divi)
print("La Potenciación de los 2 digitos es:", poten)
#///////////////////////////////////
#Punto #3
print ("-----------------------------------------------------------")
print ("TERCER PUNTO")
print ("Recordar que el Radio es 1/2 del Diametro")
radio = float(input("Digite el radio de su circunferencia:"))
area = 3.1416 * radio ** 2
print("El área de su circunferencia es:", area)
print ("-----------------------------------------------------------")
#Punto #4
print ("CUARTO PUNTO") 
print ("Para calcular el area y perimetro de un rectángulo digite los siguientes datos: ")
alt = float(input("Digite la altura de su rectángulo:"))
bas = float(input("Digite la base de su rectángulo:"))
arear = bas * alt
peri = alt * 2 + bas * 2
print ("El área de su rectángulo es:", arear)
print ("El perimetro de su rectángulo es:", peri)
print ("-----------------------------------------------------------")
#Punto #5
print ("QUINTO PUNTO")
print ("Ingrese los valores para calcular la cuadrática")
a = float(input("Ingrese el valor de a: "))
b = float(input("Ingrese el valor de b: "))
c = float(input("Ingrese el valor de c: "))
valor_cuadratica_p = (-b + (b**2 -(4*a*c)**0.5))/2*a
valor_cuadratica_n = (-b - (b**2 -(4*a*c)**0.5))/2*a
print ("El valor de la cuadrática en positivo es: ", valor_cuadratica_p)
print ("El valor de la cuadrática en negativo es: ", valor_cuadratica_n)
print ("-----------------------------------------------------------")
#Punto #6
print ("SEXTO PUNTO")

digito = int (input("Ingrese un número de 4 dígitos: "))
digito4 = digito % 10
digito3 = int ((digito % 100) //10)
digito2 = int ((digito % 1000) //100)
digito1 = int ((digito - (digito % 1000)) //1000)

print ("Su número invertido es: ", digito4, digito3, digito2, digito1)
print ("-----------------------------------------------------------")
#Punto #7
print ("SEPTIMO PUNTO")

x = input ("Digite el valor de x: ")
y = input ("Digite el valor de y: ")
x , y = y , x #Intercambio de variables 
print ("El nuevo valor de x es: ", x)
print ("El nuevo valor de y es: ", y)

