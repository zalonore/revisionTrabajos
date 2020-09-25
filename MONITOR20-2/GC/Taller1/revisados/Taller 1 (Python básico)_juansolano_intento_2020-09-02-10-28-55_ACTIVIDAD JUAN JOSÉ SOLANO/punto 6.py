print("punto 6 numero invertido")
n = int(input("Ingrese un número entero de cuatro cifras: "))
d1 = n//1000
d2 = (n%1000)//100
d3 = (n%100)//10
d4= n%10
completo = (str(d4) +str(d3) +str(d2) + str(d1))
int(completo)
print("El número invertido sería: ", completo)
