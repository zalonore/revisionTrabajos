#Numero invertido
usuario=int(input("digite un numero de cuatro cifras:"))
a= usuario//1000
residuo=usuario%1000
b= residuo//100
residuob=residuo%100
c= residuob//10
d= residuob%10
print(d,c,b,a)
