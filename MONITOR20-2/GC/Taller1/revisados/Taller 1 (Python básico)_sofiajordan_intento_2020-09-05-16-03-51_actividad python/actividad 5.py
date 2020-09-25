print('el valor de a debe ser el menor, valor de b debe ser mayor y el valor de c debe ser intermedio') 
a= float(input('digite el valor de a en la ecuacion: '))
b= float(input('digite el valor de b en la ecuacion: '))
c= float(input('digite el valor de c en la ecuacion: '))
mraiz= b**-4*a*c
print('el resultado de la multiplicaion de raiz:' ,mraiz)
rmraiz= mraiz**(1/2)
print('elresultado de la raiz:' ,rmraiz) 
mdenominador= 2*a
print('el resultado de la multiplicacion del denominador: ' ,mdenominador)
rresultadob= -b+rmraiz
print(' el resultado de la suma de -b y la raiz: ' ,rmraiz)
resultadototal= mdenominador/rresultadob
print('el resultado total: ' ,resultadototal)
rresultadob= -b-rmraiz
print(' el resultado de la suma de -b y la raiz: ' ,rmraiz)
resultadototal= mdenominador/rresultadob
print('el resultado total: ' ,resultadototal)
