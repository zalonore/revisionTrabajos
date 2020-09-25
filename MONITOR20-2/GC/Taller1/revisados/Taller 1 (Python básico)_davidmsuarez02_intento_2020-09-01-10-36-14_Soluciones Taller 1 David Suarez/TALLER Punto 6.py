a=int(input("Ingrese un numero entero de cuatro cifras"))
print( "Tu numero es:",a)
c4=a%10
c3=int((a%100)//10)
c2=int(a%1000)//100
c1=int((a/100)//10)

print("El numero invertido es",str(c4)+str(c3)+str(c2)+str(c1))



