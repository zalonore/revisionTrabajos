Número= int(input("Digíte un número de 4 cifras"))

a=Número%10
b=int((Número%100)/10)
c=int((Número&1000)/100)
d=Número//1000

print("El número al revés es igual a",a,b,c,d)
