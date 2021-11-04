//Incluyo biblioteca de entrada/salida.
#include <stdio.h>

int sumar(int x, int y){
  return x+y;
}
int restar(int x,int y){
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

int invertirNum(int N)
{
  int invertido=0, Resto;
    while(N!=0){

      Resto=N%10;
      N=N/10;
      invertido=invertido*10+Resto;

      }
     return invertido;
 }

int bisiesto(int anio)
{
    int comprobante;

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ){
      comprobante=1;
    }
    else{
      comprobante=0;
    }
    return comprobante;
}

int main(){
  int numUno,numDos,resultado,cantidadHermanos, anio1, anio;
  char nombreUsuario[15];
  float resultadoDivision;
  printf("Bienvenido!, Digite su nombre: ");
  scanf("%s",nombreUsuario);
  printf("Cuantos hermanos tiene?: ");
  scanf("%d",&cantidadHermanos);
  printf("CALCULADORA BASICA\n");
  printf("Ingrese el numero uno \n");
  scanf("%d",&numUno);
  printf("Ingrese el numero dos \n");
  scanf("%d",&numDos);
  
  //Operaciones BASICAS

  resultado=sumar(numUno,numDos);
  printf("Resultado de la Suma %d \n", resultado);
  
   resultado=restar(numUno,numDos);
  printf("Resultado de la Resta %d \n", resultado);
  
   resultado=multiplicar(numUno,numDos);
  printf("Resultado de la Multiplicacion %d \n", resultado);
  
   resultadoDivision=dividir(numUno,numDos);
  printf("Resultado de la Division %f \n", resultadoDivision);

  // AÑO BISIESTO

  printf("Digite el anio que desea consultar si es o no Bisiesto\n");
  scanf("%d",&anio);

  anio1=bisiesto(anio);
  if (anio1 == 1){
    printf("El anio %d es Bisiesto, y mi nombre es %s \n",anio,nombreUsuario);
    }
  else{
    printf("El anio %d no es Bisiesto, y tengo %d hermanos \n",anio,cantidadHermanos);
    }

// NUMERO PALINDROMO 

  int N, Respuesta;
  printf("Ingrese el numero que desea consultar si es o no Palindromo\n");
  scanf("%d", &N);
  Respuesta=invertirNum(N);
  if (Respuesta == N){
  printf("Su numero es Palindromo");
}
  else{
  printf("Su numero no es Palindromo");
  }
  return 0;
}
