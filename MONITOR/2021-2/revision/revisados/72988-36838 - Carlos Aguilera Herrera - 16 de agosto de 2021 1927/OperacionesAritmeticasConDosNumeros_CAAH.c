// Realizado por Andres Aguilera 2021.

#include <stdio.h> // Incluyo biblioteca de entrada/salida.

int funcionSuma(int x, int y){
  return x+y;
}

int funcionResta(int x, int y){
  return x-y;
}

int funcionMultiplicacion(int x, int y){
  return x*y;
}

float funcionDivision(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d, el divisor debe de ser mayor a cero \n", x,y);
  }
  return result;
}

int funcionPalindromo(int palindromo){
	
	int palindromo2, palindromoInvertido, digito;
	palindromoInvertido = 0;
	palindromo2 = palindromo; // Para no danar el palindromo que mas adelante necesitare
	
	while (palindromo2 > 0){
		digito = palindromo2 % 10; // saco el ultimo digito del numero, es decir, de 123 sacaria el 3.
		palindromo2 /= 10; // actualizo el palindromo, quitandole el ultimo numero, es decir de 123 el resultado es 12
		palindromoInvertido *= 10; // le agrego un cero al final del numero para luego concatenarle al final el otro numero
		palindromoInvertido += digito; // le agrego el digito al final
	}		
		
	if (palindromo == palindromoInvertido){
		return 1;
	}
	else{
		return 0;
	}
}

int AnoBisiesto(int ano){
	if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	
  // Variables	
  int Num1,Num2,Resultado,Palindromo,ResultadoPalindromo,ano,resultadoAno;
  int CantHermanos;
  char nombre;
  float ResultadoDivision;
  
  // Pedidos por teclado
  printf("\n");
  printf("Bienvenidos al programa todo en uno, Operaciones Aritmeticas, numeros palindromos y anios bisiestos \n");
  printf("\n");
  printf("Ingrese el primer numero para operaciones aritmeticas: ");
  scanf("%d",&Num1);
  printf("Ingrese el segundo numero para operaciones aritmeticas: ");
  scanf("%d",&Num2);
  printf("\n");
  printf("Ingrese el numero entero que quiere verificar como palindromo: ");
  scanf("%d",&Palindromo);
  printf("\n");
  printf("Ingrese el anio que quiere verificar como bisiesto: ");
  scanf("%d",&ano);
  printf("\n");
  
  //Operaciones
  Resultado=funcionSuma(Num1,Num2);
  printf("Resultado de la Suma entre %d y %d es %d \n",Num1,Num2,Resultado);
  
  Resultado=funcionResta(Num1,Num2);
  printf("Resultado de la resta entre %d y %d es %d \n",Num1,Num2,Resultado);
  
  Resultado=funcionMultiplicacion(Num1,Num2);
  printf("Resultado de la multiplicacion entre %d y %d es %d \n",Num1,Num2,Resultado);
  
  ResultadoDivision=funcionDivision(Num1,Num2);
  printf("Resultado de la division entre %d y %d es %f \n",Num1,Num2,ResultadoDivision);
  
  //Codigo Palindromo
  ResultadoPalindromo = funcionPalindromo(Palindromo);
  if (ResultadoPalindromo){
	printf("El numero %d es un Palindromo \n",Palindromo);
  }
  else{
	printf("El numero %d NO es un Palindromo \n",Palindromo);
  }
  
  //Codigo año bisiesto
  resultadoAno = AnoBisiesto(ano);
  if (resultadoAno){
	printf("El anio %d es bisiesto y mi nombre es Andres \n",ano);
  }
  else{
	printf("El anio %d NO es bisiesto y tengo 1 hermano \n",ano);
  }
  
  printf("\n");
  return 0;

}