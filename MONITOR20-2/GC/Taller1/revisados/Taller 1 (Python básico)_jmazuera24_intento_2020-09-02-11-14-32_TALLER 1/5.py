print("TALLER # 1")
print ("PUNTO 5")
print ("Pida al usuario los valores de las variables necesarios, para que usted pueda construir un programa que se encargue de calcular la fórmula de la ecuación cuadrática.")
print ("NOTA: El digito 1 tiene que ser el MENOR de los 3, el digito 2 tiene que ser el MAYOR de los 3, y el digito 3 tiene que ser el valor MEDIO; para que los resultados sean correctos")
a=float(input("Ingrese su digito 1: "))
b=float(input("Ingrese su digito 2: "))
c=float(input("Ingrese su digito 3: "))
print ("RESULTADO NEGATIVO")
print ("Recordemos que la formula de la funcion cuadratica es X=(-b-√(b^2-4*a*c))/2*a")
multiplicacionraiz=b**2-4*a*c
print ("El resultado de la multiplicacion de la raiz es",multiplicacionraiz)
resultadoraiz=multiplicacionraiz**(1/2)
print ("El resultado de la de la raiz es",resultadoraiz)
multiplicaciondivision=2*a
print ("El resultado de la de la multiplicacion de la division es",multiplicaciondivision)
multiplicaionresta=-b-resultadoraiz
print ("El resultado de la de la multiplicaion con la resta del primer termino es",multiplicaionresta)
resultadototal=-multiplicaionresta/multiplicaciondivision
print ("El resultado total es",resultadototal)
print ("RESULTADO POSITIVO")
print ("Recordemos que la formula de la funcion cuadratica es X=(-b+√(b^2-4ac))/2a")
multiplicacionraiz=b**2-4 * a *c
print ("El resultado de la multiplicacion de la raiz es",multiplicacionraiz)
resultadoraiz=multiplicacionraiz**(1/2)
print ("El resultado de la de la raiz es",resultadoraiz)
multiplicaciondivision=2*a
print ("El resultado de la de la multiplicacion de la division es",multiplicaciondivision)
multiplicaionresta=-b+resultadoraiz
print ("El resultado de la de la multiplicaion con la resta del primer termino es",multiplicaionresta)
resultadototal=-multiplicaionresta/multiplicaciondivision
print ("El resultado total es",resultadototal)
