/* 
Fecha: 19/08/2021
Nombre: Sebastian Gomez Variables
ID: 8963213
Codigo Original : Gonzalo Noreña
Código modificado: Sebasatián Gómez Valencia
Taller 1.c - Tecnicas de Programación
FUNCIONALIDAD: Calculadora que realiza las 4 operaciones basicas (suma,resta,multiplicación y división) dados dos numeros, adicionalmente tiene la funcion que
que determina si un numero es o no palindromo y por ultimo, evalua si un año ingresado por el usuario es bisiesto o no.
*/
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>
//FUNCIONES
int sumarNumeros(int numUno, int numDos){
  return numUno+numDos;
}
int restarNumeros(int numUno, int numDos){
  return numUno-numDos;
}
int multiplicarNumeros(int numUno, int numDos){
  return numUno*numDos;
}
float dividirNumeros(int numUno, int numDos){
  float result=0.0;
  if(numDos>0){
	result= (float)numUno/ (float)numDos;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", numUno,numDos);
  }
  return result;
}
int invertirNumero(int numero){
      int resp=0;
      while( numero > 0 ) 
      { 
            resp = resp + numero % 10; 
            resp = resp*10;  
            numero = numero/10;  
      }
      return resp/10;
} 
//PROCEDIMIENTO
void esPalindromo(int num, int inverso)
{
  if (num == inverso)
  {
    printf("El numero %d es palindromo.\n",num);
  }
  else
  {
    printf("El numero %d no es palindromo.\n",num);
  }
}
int anioBisiesto(int anioIngresado){
   int bisiesto_noBisiesto;
   if ( (anioIngresado % 4 == 0 && anioIngresado % 100 != 0) || anioIngresado % 400 == 0 ){
        bisiesto_noBisiesto=1;
   }else{
     bisiesto_noBisiesto=0;
   }
   return bisiesto_noBisiesto;
 }
int main(){
  int numeroUno,numeroDos,resultadoOperacion;
  float resultadoDivision;
  int numeroIngresado=0;
  int numeroInvertido;
  int anio;
  int funcionBisiesto;
  char nombre[20];
  int cantHermanos;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el numero que desea consultar si es o no palindromo:");
  scanf("%d",&numeroIngresado);
  printf("Ingrese su nombre:");
  scanf("%s",nombre);
  printf("Ingrese la cantidad de hermanos:");
  scanf("%d",&cantHermanos);
  printf("Ingrese el anio a consultar:");
  scanf("%d",&anio);
  printf("Ingrese el num uno \n");
  scanf("%d",&numeroUno);
  printf("Ingrese el num dos \n");
  scanf("%d",&numeroDos);
  
  //Operaciones
  //SUMAR
  resultadoOperacion=sumarNumeros(numeroUno,numeroDos);
  printf("Resultado suma %d \n", resultadoOperacion);
  //RESTA
   resultadoOperacion=restarNumeros(numeroUno,numeroDos);
  printf("Resultado resta %d \n", resultadoOperacion);
  //MULTIPLICACION
   resultadoOperacion=multiplicarNumeros(numeroUno,numeroDos);
  printf("Resultado multiplicacion %d \n", resultadoOperacion);
  //DIVISION
   resultadoDivision=dividirNumeros(numeroUno,numeroDos);
  printf("Resultado division %f \n", resultadoDivision);
  //PALIDROMO
  numeroInvertido= invertirNumero(numeroIngresado);
  esPalindromo(numeroIngresado,numeroInvertido);
  //AÑO BISIESTO
  funcionBisiesto=anioBisiesto(anio);
  if (funcionBisiesto==1)
  {
    printf("El anio %d es bisiesto y mi nombre es %s",anio,nombre);
  }
  else
  {
    printf("El anio %d no es bisiesto y tengo %d hermano(s).",anio,cantHermanos);
  }
  return 0;
}



