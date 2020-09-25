numero=int(input("digite su numero entero de 4 cifras por favor: "))
a=str(numero%10)
b=str(numero%100//10)
c=str(numero%1000//100)
d=str(numero%10000//1000)
r=(a+b+c+d)
print(r)


