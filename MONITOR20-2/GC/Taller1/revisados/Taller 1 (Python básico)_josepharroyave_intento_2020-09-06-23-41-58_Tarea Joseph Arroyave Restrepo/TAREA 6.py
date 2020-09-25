numero = float(input("Digite un numero de 4 cifras: "))
if numero <9999:
    print ("El numero debe ser de 4 cifras")
PrimeraCifra = int(numero % 10)
SegundaCifra = int((numero % 100) / 10)
TerceraCifra = int((numero % 1000) / 100)
CuartaCifra = int((numero % 10000) / 1000)

print (str(PrimeraCifra)+str(SegundaCifra)+str(TerceraCifra)+str(CuartaCifra))

