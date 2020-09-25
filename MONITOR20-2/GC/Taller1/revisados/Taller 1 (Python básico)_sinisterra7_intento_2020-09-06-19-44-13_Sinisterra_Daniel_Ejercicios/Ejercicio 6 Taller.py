N=int(input("Buen día Gonzo, digite un número de 4 cifras: "))

n1= str(N//1000)
n2= str((N//100)-(N//1000)*10)
n3= str((N//10)-(N//100)*10)
n4= str(N%10)

Invertido= n4+n3+n2+n1
Invertido= int(Invertido)



print(Invertido)

