numero=int(input("ingrese 4 digitos:"))
digito1=(numero%10)
digito2=(numero%100)//10
digito3=(numero//100)%10
digito4=numero//1000
print("su numero invertido es:",digito1,digito2,digito3,digito4)           
