numero = int(input("Escriba un numero de cuatro cifras: "))

primerDigito = (numero -(numero % 1000)) // 1000
segundoDigito = (numero % 1000) // 100
tercerDigito = (numero % 100) // 10
cuartoDigito = numero % 10

print("su numero invertido es: ", cuartoDigito, tercerDigito, segundoDigito, primerDigito)
