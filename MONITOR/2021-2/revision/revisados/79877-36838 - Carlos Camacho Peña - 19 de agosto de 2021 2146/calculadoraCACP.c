
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int sumar(int x, int y){
  return x+y;
}
int restar(int x, int y){
  return x-y;
}
int multiplicar(int x, int y){
  return x*y;
}
float dividir(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}
int calcularPalindromos(int numPal){
  int digito,numFinal;
  numFinal = 0;

  if (numPal>=100000000){
    while (numPal>0){
      digito = numPal %10;
      numFinal *= 10;
      numFinal += digito;
      numPal /= 10;
    }
    return numFinal;
  }else{
      printf("El numero no es valido\n");
  }
}
int calcularBisiesto(int x){
  if((x%4==0) && (x%100!=0) || (x%400==0)){
    return 1;
  }else{
    return 0;
  }
}

int main(){
  int numUno,numDos,resultado1,anio,bisiesto,numPal,palindromo;
  float resultado2;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&numUno);
  printf("Ingrese el num dos \n");
  scanf("%d",&numDos);
  
  //Operaciones
  resultado1=sumar(numUno,numDos);
  printf("El resultado de sumar los dos numeros es: %d \n", resultado1);
  
   resultado1=restar(numUno,numDos);
  printf("El resultado de restar los dos numeros es: %d \n", resultado1);
  
   resultado1=multiplicar(numUno,numDos);
  printf("El resultado de multiplicar los dos numeros es: %d \n", resultado1);
  
   resultado2=dividir(numUno,numDos);
  printf("El resultado de dividir los dos numeros es: %f \n", resultado2);

  printf("Ingrese el numero de 9 digitos que desea saber si es palindromo:\n");
  scanf("%d", &numPal);
  palindromo=calcularPalindromos(numPal);
  if (palindromo==numPal){
    printf("El numero es palindromo\n");
  }else{
    printf("El numero no es palindromo\n");
  }

  printf("Ingrese el anio que desea saber si es bisiesto \n");
  scanf("%d", &anio);
  bisiesto=calcularBisiesto(anio);
  if (bisiesto==1){
    printf("El anio %d es bisiesto y mi nombre es Carlos Andres Camacho Pena \n", anio);
  }else{
    printf("El anio %d no es bisiesto y tengo 2 hermanos \n", anio);
  }
  
  return 0;

}