//Incluyo biblioteca de entrada/salida.
#include <stdio.h>

int sumarValores(int x, int y){
  return x+y;
}
int restarValores(int x, int y){
  return x-y;
}
int multiplicarValores(int x, int y){
  return x*y;
}
float divisionValores(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d -- %d \n", x,y);
  }
  return result;
}

int funcionPalindroma(int valor, int potencia, int resultado){
  int valoraModificar = valor;
  int valorContrario = 0;
  while(valoraModificar > 0){
    valoraModificar/=10;
    potencia++;
  }
  valoraModificar = valor;
  int n = potencia;
  for (int i = 0; i < n; ++i){
    int cantidad = 1;
    for (int i = 0; i < potencia-1; ++i){
      cantidad*=10;
    }
    valorContrario = valorContrario + (cantidad * (valoraModificar % 10));
    valoraModificar/=10;
    potencia--;
  }
  printf("Valor: %d\n", valor);
  printf("Valor al contrario: %d\n", valorContrario);
  if(valor == valorContrario){
    resultado = 1;
  }else{
    resultado = 0;
  }
  return resultado;
}

int anioBisiesto(int num){
  int resultadoAnio;
  if(num % 4 == 0){
    if(num % 100 == 0){
      if(num % 400 == 0){
        resultadoAnio = 1;
      }else{
        resultadoAnio = 0;
      }
    }else{
      resultadoAnio = 1;
    }
  }else{
    resultadoAnio = 0;
  }
  return resultadoAnio;
}

int main(){
  int valorUno,valorDos,resultadoFinal;
  float resultadoFinal2;
  int numero = 0, potencia = 0, resultado = 0;
  int fecha;
  char nombre[10] = "Juan";
  int hermanos = 1;
  int resultadoFinal3;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&valorUno);
  printf("Ingrese el num dos \n");
  scanf("%d",&valorDos);
  
  //Operaciones
  resultadoFinal=sumarValores(valorUno,valorDos);
  printf("Resultado de la suma de %d + %d = %d\n", valorUno, valorDos, resultadoFinal);
  
   resultadoFinal=restarValores(valorUno,valorDos);
  printf("Resultado de la resta de %d - %d = %d\n", valorUno, valorDos, resultadoFinal);
  
   resultadoFinal=multiplicarValores(valorUno,valorDos);
  printf("Resultado de la multiplicacion de %d x %d = %d\n", valorUno, valorDos, resultadoFinal);
  
   resultadoFinal2=divisionValores(valorUno,valorDos);
  printf("Resultado de la division de %d / %d = %d\n", valorUno, valorDos, resultadoFinal);
  
  printf("Por favor digite un valor: \n");
  scanf("%d", &numero);
  resultado = funcionPalindroma(numero, potencia, resultado);
  if(resultado == 1){
    printf("El numero %d si es palidromo\n", numero);
  }else if(resultado == 0){
    printf("El numero %d no es palidromo\n", numero);
  }

  printf("Ingrese el anio\n");
  scanf("%d", &fecha);
  resultadoFinal3 = anioBisiesto(fecha);
  if(resultadoFinal3 == 1){
    printf("El anio %d es bisiesto y mi nombre es %s", fecha, nombre);
  }else if(resultadoFinal3 == 0){
    printf("El anio %d no es bisiesto y tengo %d hermano(s)", fecha, hermanos);
  }

  return 0;

}