
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int sumarNumeros(int x, int y){
  return x+y;
}
int restarNumeros(int x, int y){
  return x-y;
}
int multiplicarNumeros(int x, int y){
  return x*y;
}
float dividirNumeros(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}



int revisarPalindromo(int x){
  int invertido= 0;
  int num =0;
  int igualX= x*1;
  
  while(igualX!= 0){
    
    num= x % 10;
    invertido *= 10;
    invertido+= num;
    igualX /=10;

  }

    return invertido;
}   
int aniobisiesto(int x){
  int valor=0;
  

  if(x%4 == 0 && x%10 != 0 || x%400 == 0){

    return ++valor ;

  }
  else{

    return valor;
  }

}





int main(){
  int num1,num2,operacion,palindromo,anio;
  float division;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el primer numero \n");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero \n");
  scanf("%d",&num2);
  
  //Operaciones
  operacion=sumarNumeros(num1,num2);
  printf("Resultado suma: %d \n", operacion);
  
   operacion=restarNumeros(num1,num2);
  printf("Resultado resta: %d \n", operacion);
  
   operacion=multiplicarNumeros(num1,num2);
  printf("Resultado multiplicacion: %d \n", operacion);
  
   division=dividirNumeros(num1,num2);
  printf("Resultado division: %f \n", division);
  
  //Palindromo
  printf("ingrese un numero de 9 digitos \n");
    scanf("%d",&palindromo);
    

    operacion= revisarPalindromo(palindromo);
    
  if(operacion == palindromo){
  printf("El numero es palindromo \n" );
  }

  else {
  printf("El numero no es palindromo\n");
  }
  
  //Bisiesto

  printf("ingresar un anio:");
  scanf("%d",&anio);

  operacion=aniobisiesto(anio);
    
  if(operacion == 1){
    printf("el anio es bisiesto \n");
  }
    
  else if(operacion == 0){
    printf("el anio no es bisiesto \n");
  } 


  return 0;

}