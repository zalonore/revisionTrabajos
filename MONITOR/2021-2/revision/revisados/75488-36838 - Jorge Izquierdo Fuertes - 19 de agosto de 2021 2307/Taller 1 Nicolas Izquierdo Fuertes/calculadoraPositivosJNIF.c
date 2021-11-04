
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int sumaNums(int x, int y){
  return x+y;
}
int restaNums(int x, int y){
  return x-y;
}
int multiNums(int x, int y){
  return x*y;
}
float diviNums(int x, int y){
  float result=0.0;
  if(y>0){
  result= (float)x/ (float)y;
  }else{
  printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}

int main(){
  int a,b,c;
  float d;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&a);
  printf("Ingrese el num dos \n");
  scanf("%d",&b);
  
  //Operaciones
  c=sumaNums(a,b);
  printf("El resultado de la suma es %d \n", c);
  
   c=restaNums(a,b);
  printf("El resultado de la resta es %d \n", c);
  
   c=multiNums(a,b);
  printf("El resultado de la multiplicacion es %d \n", c);
  
   d=diviNums(a,b);
  printf("El resultado de la division es %f \n", d);
  
  return 0;

}