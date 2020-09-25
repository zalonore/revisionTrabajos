print ("Formula General")
print ("Para resolver la ecuacion general necesitamos de las siguientes varaiables")
a = float(input("Variable A: "))
b = float(input("Variable B: "))
c = float(input("Variable C: "))
FormulaSuma = (-b+((b**2)-4*a*c))/(2*a)
FormulaResta = (-b-((b**2)-4*a*c))/(2*a)
if (b**2-4*a*c)**1/2 < 0 :  
    print ("La ecuacion no tiene soluciones reales")

else:
    print ("X1 es igual a:", FormulaSuma)
    print ("X2 es igual a:", FormulaResta)

