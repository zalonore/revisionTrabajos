valor = int(input("Digite sus 4 valores: "))

primer = valor%10
segundo = valor//10%10
tercer = valor//100%10
cuarto = valor//1000
completo =(str(primer)+str(segundo)+str(tercer)+str(cuarto))
int(completo)

print("Los valores invertidos quedan: ", completo)