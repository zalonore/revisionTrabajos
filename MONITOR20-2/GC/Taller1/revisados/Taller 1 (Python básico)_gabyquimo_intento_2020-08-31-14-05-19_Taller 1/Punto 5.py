a = float(input('¿Cuál es el valor de a? '))
b = float(input('¿Cuál es el valor de b? '))
c = float(input('¿Cuál es el valor de c? '))

import math
x1 = (-b+(math.sqrt(b**2-4*a*c)))/(2*a)
print ('la primera raiz da como resultado: ',x1)
x2 = (-b-(math.sqrt(b**2-4*a*c)))/(2*a)
print ('la segunda raiz da como resultado: ',x2)
