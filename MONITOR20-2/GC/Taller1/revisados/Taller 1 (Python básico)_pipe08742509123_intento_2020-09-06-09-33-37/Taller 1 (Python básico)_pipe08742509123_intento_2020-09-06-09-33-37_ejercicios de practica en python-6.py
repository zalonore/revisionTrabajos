numero=int(input("ingrese un numero de cuatro cifras:"))
c4=numero%10
c3=int((numero%100)/10)
c2=int((numero%1000)/100)
c1=int((numero%10000)/1000)
print("el nuero invertido es igual a",c4,c3,c2,c1)
