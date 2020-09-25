n1 = int(input("Digite un número para invertir (4 dígitos): "))
n2 = 0

n2 = n1%10
n1 = n1//10
n2 = n2*10+(n1%10)
n1 = n1//10
n2 = n2*10+(n1%10)
n1 = n1//10
n2 = n2*10+(n1%10)
n1 = n1//10

print("El número invertido sería: ",n2)
