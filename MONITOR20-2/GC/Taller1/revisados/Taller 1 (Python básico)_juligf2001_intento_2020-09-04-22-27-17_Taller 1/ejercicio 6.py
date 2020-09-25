cifras= int(input("Ingrese un número de 4 cifras: "))

b= cifras//1%10
c= (cifras//10)%(10)
d= (cifras//100)%10
e= cifras//1000
completo= str(b)+str(c)+str(d)+str(e)
print(completo)
