numero= int(input("ingrese su numero:")) 
x = 0
while numero>0: 
    Y = numero % 10 
    x= (x*10) + Y
    numero //= 10 
print ("El inverso del numero que ingreso es: ", x) 
