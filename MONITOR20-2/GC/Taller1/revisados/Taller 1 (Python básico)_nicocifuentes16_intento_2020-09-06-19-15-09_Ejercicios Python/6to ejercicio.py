numero= int(input("Ingrese su número de 4 dígitos: "))

a= numero%10
b=int((numero%100)/10)
c=int((numero%1000)/100)
d=numero//1000
print("El número al revés sería ",a,b,c,d)

