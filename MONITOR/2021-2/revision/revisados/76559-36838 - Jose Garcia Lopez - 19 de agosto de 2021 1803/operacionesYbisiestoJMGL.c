
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int suma(int num1, int num2){
  return num1+num2;
}
int resta(int num1, int num2){
  return num1-num2;
}
int multiplicacion(int num1, int num2){
  return num1*num2;
}
float division(int num1, int num2){
  float result = 0.0;
  if(num2 > 0){
	result = (float)num1/(float)num2;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", num1,num2);
  }
  return result;
}
int bisiesto(int anio){
  int retorna = 0;
  if ((anio%4 == 0) && (anio%100 != 0) || (anio%400 == 0)){
  retorna = 1;
  }else{
  retorna = 0;
  }
  return retorna;
}
int main(){
  int n1,n2,operacion,aBisiesto, anioB;
  float div;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el primer numero \n");
  scanf("%d",&n1);
  printf("Ingrese el segundo numero \n");
  scanf("%d",&n2);
  
  //Operaciones
  operacion=suma(n1,n2);
  printf("Resultado de la suma de los dos numeros: %d \n", operacion);
  
   operacion=resta(n1,n2);
  printf("Resultado de la resta de los dos numeros: %d \n", operacion);
  
   operacion=multiplicacion(n1,n2);
  printf("Resultado de la multiplicacion de los dos numeros: %d \n", operacion);
  
   div=division(n1,n2);
  printf("Resultado de la division de los dos numeros: %f \n", div);

  printf("Ingrese el anio: \n");
  scanf("%d", &anioB);

  aBisiesto = bisiesto(anioB);
  if (aBisiesto == 1){
    printf("El anio %d es bisiesto y mi nombre es Jose Manuel Garcia \n", anioB);
  }else{
    printf("El anio %d no es bisiesto y tengo 1 hermano(s) \n", anioB);
  }

  return 0;
}