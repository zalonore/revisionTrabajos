
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>
#include <stdbool.h>



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

bool palindromo(int numero){

  int numeroRestante, numeroReverso = 0, numeroOriginal = numero;

  while (numero != 0){
    numeroRestante = numero % 10;
    numeroReverso = numeroReverso * 10 + numeroRestante;
    numero = numero / 10;
  }

  if (numeroOriginal == numeroReverso) return true;
  else return false;

}

int bisiesto(int year){

    if ((year % 4 == 0) && (year % 100 != 0)){
        return 1;
    }
    else if (year % 400 == 0) {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
  int numeroPalindromo, anio, resultadoBisiesto;
  bool resultadoPalindromo;
  int numUno,numDos,numtres;
  float decimal;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&numUno);
  printf("Ingrese el num dos \n");
  scanf("%d",&numDos);

  //Operaciones
  numtres=sumar(numUno,numDos);
  printf("El resultado de la suma es: %d \n", numtres);

  numtres=restar(numUno,numDos);
  printf("El resultado de la resta es: %d \n", numtres);

  numtres=multiplicar(numUno,numDos);
  printf("El resultado de la multiplicacion es: %d \n", numtres);

  decimal=dividir(numUno,numDos);
  printf("El resultado de la division es: %f \n", decimal);


  // leer el número palindromo
  printf("Ingrese un num de 9 digitos \n");
  scanf("%d",&numeroPalindromo);

  // asegurar que el número contenga 9 dígitos
  while (numeroPalindromo < 100000000 || numeroPalindromo > 999999999){
    printf("El num ingresado no es de 9 digitos, ingrese uno nuevo \n");
    scanf("%d",&numeroPalindromo);
  }

  resultadoPalindromo = palindromo(numeroPalindromo);

  if(resultadoPalindromo)
    printf("El num %d es palindromo \n",numeroPalindromo);
  else
    printf("El num %d no es palindromo \n",numeroPalindromo);

  // leer año
  printf("Ingrese un anio\n");
  scanf("%d",&anio);

  resultadoBisiesto = bisiesto(anio);

  if (resultadoBisiesto == 1)
    printf("El anio %d es bisiesto y mi nombre es Mohamad \n",anio);
  else
    printf("El anio %d no es bisiesto y tengo 2 hermanas \n",anio);
  return 0;

}
