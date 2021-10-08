
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

int main(){
  int numUno,numDos,numTres;
  float numCuatro;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&numUno);
  printf("Ingrese el num dos \n");
  scanf("%d",&numDos);
  
  //Operaciones
   numTres=sumar(numUno,numDos);
  printf("Resultado operacion uno %d \n", numTres);
  
   numTres=restar(numUno,numDos);
  printf("Resultado operacion dos %d \n", numTres);
  
   numTres=multiplicar(numUno,numDos);
  printf("Resultado operacion tres %d \n", numTres);
  
   numCuatro=dividir(numUno,numDos);
  printf("Resultado operacion cuatro %f \n", numCuatro);
  
  




#include <conio.h>
#include <stdio.h>


    int anio;

    printf( "\n   Introduzca un a%co: ", 164 );
    scanf( "%d", &anio );

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
        printf( "\n   ES BISIESTO Y TENGO 0 HERMANOS" );
    else
        printf( "\n   NO ES BISIESTO Y TENGO 1 HERMANO" );

    getch();

    return 0;
}