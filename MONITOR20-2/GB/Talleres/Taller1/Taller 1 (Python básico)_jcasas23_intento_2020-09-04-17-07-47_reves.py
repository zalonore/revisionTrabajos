n = int (input ("Ingrese su numero de 4 digitos: "))

if (n < 1000):
    print ("Número inválido")
elif (n > 9999):
    print ("Número inválido")
else:
    m = n % 10
    o = (n // 10) % 10
    p = (n // 100) % 10
    q = (n // 1000) % 10
    reves = (m * 1000) + (o * 100) + (p * 10) + q
    print ("Su número al revés es: ",reves)
# Jorge Casas
