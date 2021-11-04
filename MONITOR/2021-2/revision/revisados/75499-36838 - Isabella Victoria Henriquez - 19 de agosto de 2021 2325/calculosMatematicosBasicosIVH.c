
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int calculoTotal(int num1, int num2){
  return num1+num2;
}
int calculoDiferencia(int num1, int num2){
  return num1-num2;
}
int calculoProducto(int num1, int num2){
  return num1*num2;
}
float calculoCociente(int num1, int num2){
  float result=0.0;
  if(num2>0){
	result= (float)num1/ (float)num2;
  }
  else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", num1,num2);
  }
  return result;
}
int verificarPalindromo(int numero){
  int numeroInvertido = 0;
  while(numero > 0){
    int digit = numero % 10;
    numeroInvertido *= 10;
    numeroInvertido += digit;
    numero /= 10;
  }
  return numeroInvertido;
}

int verificarBisiesto(int aaaa){
  if(aaaa/4 == 0 && aaaa/100 != 0 && aaaa/400 == 0){
    return 1;
  }
  else{
    return 0;
  }
}
int main(){
  int num1,num2,total,diferencia,producto,num3,palindromo,year,bisiesto;
  float cociente;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el numero uno \n");
  scanf("%d",&num1);
  printf("Ingrese el numero dos \n");
  scanf("%d",&num2);
  printf("Ingrese el numero tres para verificar si es palindromo \n");
  scanf("%d",&num3);

  while(sizeof(num3) != 9)
  {
    printf("El numero debe de tener 9 digitos \n");
    scanf("%d",&num3);
  }
  
  while(sizeof(year) != 4)
  {
    printf("Digite el year a evaluar \n");
    scanf("%d", year);
  }
  
  //Operaciones
  total=calculoTotal(num1,num2);
  printf("Resultado de la suma: %d\n", &total);
  
   diferencia=calculoDiferencia(num1,num2);
  printf("Resultado de la resta: %d\n",diferencia);
  
   producto=calculoProducto(num1,num2);
  printf("Resultado de la multiplicacion: %d\n",producto);
  
   cociente=calculoCociente(num1,num2);
  printf("Resultado de la division: %f \n",cociente);
  
  palindromo=verificarPalindromo(num3);
  if(palindromo = num3){
    printf("%d es palindromo \n", num3);
  }
  else{
    printf("%d no es palindromo \n", num3);
  }
  
  bisiesto=verificarBisiesto(year);
  if(bisiesto == 0){
    printf("El year %d no es bisiesto y tengo 2 hermanas", year);
  }
  else{
    printf("El year %d es bisiesto y mi nombre es Isabella", year);
  }
  return 0;

}