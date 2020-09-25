def ejercicios():
    print("""para ver los ejercicios llame las siguientes funciones:
e1() = ejercicio 1
e2() = ejercicio 2
e3() = ejercicio 3
e4() = ejercicio 4
e5() = ejercicio 5
e6() = ejercicio 6
e7() = ejercicio 7
""")
    
def e1():
    print ("""
\  |  /

  @ @
  
\ ººº /
""")
    return ejercicios()

def e2():
    print("Operaciones")
    a = float(input("""primer numero
"""))
    b = float(input("""segundo numero
"""))
    c = (a+b)
    d = (a-b)
    e = (a*b)
    f = (a/b)
    g = (a**b)
    h = input("""que operacion quiere usar?:
suma
resta
multiplicacion 
division
potencia
""")
    if h =="suma":
        print (c)
        return ejercicios()
    elif h == "resta":
        print (d)
        return ejercicios()
    elif h == "multiplicacion":
        print (e)
        return ejercicios()
    elif h == "division":
        print (f)
        return ejercicios()
    elif h == "potencia":
        print (g)
        return ejercicios()
    else:
        print("invalido")
        return e2()

def e3():
    re = 0
    r = 0
    d = 0
    re = str(input("""radio o diametro
"""))
    if re == "radio":
        r = float(input("""medida radio:
"""))
        formula_r = (3.1416*(r**2))
        print("El area del circulo es: ",formula_r, "cm cuadrados")
        return ejercicios()
        
    elif re == "diametro":
        d = float(input("""medida diametro:
"""))
        
        formula_d = (3.1416*((d/2)**2))
        print ("El area del circulo es",formula_d,"cm cuadrado")
        return ejercicios()
    else:
        print("INVALIDO")
        return e3()

def e4 ():
    b = float(input("""base del rectangulo
"""))
    h = float(input("""altura del triangulo
"""))
    area = (b*h)
    perimetro = (b*2+h*2)
    o = str(input("""area, perimetro o ambas
"""))
    if o == "area":
            print ("el area de rectangulo es",area, "cm cuadrado")
            return ejercicios()
    elif o == "perimetro":
            print ("El perimetro de rectangulo es",perimetro,"cm")
            return ejercicios()
    elif o == "ambas":
        print ("el perimetro y el area son rerspectivamente:",perimetro,"cm y",area,"cm cuadrados")
        return ejercicios()
    else:
        print ("invalido")
        return e4()

def e5():
    from math import sqrt 
    print("""ecuacion de segundo grado aX^2+bX+c
""")
    a = float(input("""introduzca coeficiente cuadratico
""")) 
    b = float(input("""introduzca coeficiente lineal
"""))
    c = float(input("""introduzca termino independiente
"""))
    print("X=",(-b+sqrt(b**2-(4*a*c)))/(2*a) , " ó X=", (-b-sqrt(b**2-(4*a*c)))/(2*a) )
    return ejercicios()

def e6():
    x = int(input("""introduzca un numero de 4 digitos
"""))
    a = int(x/1000)
    b = int((x/100)%10)
    c = int((x/10)%10)
    d = int((x%10))
    reverso = (d*1000+c*100+b*10+a)
    print(reverso)
    return ejercicios()

def e7 ():
    x = input("x = ")
    y = input("y = ")
    x,y = y,x
    print ("x = ",x)
    print ("y = ",y)
    return ejercicios()



      
