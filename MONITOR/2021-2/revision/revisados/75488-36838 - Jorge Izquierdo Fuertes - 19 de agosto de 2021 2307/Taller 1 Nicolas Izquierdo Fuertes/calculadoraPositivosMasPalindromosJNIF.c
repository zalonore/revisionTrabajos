
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
int palindromo (int p){
  int pal,c,b,d;
  c=p; d= 0;
  if (p<10)
  {
    pal=1;
  }
  else{
    while (c>10){
      b=c%10;
      c=c/10;
      d=(d+b)*10;
    }
    d=d+c;
    if(d==p)
    {
      pal=1;
    }
    else{
      pal=0;
    }
  }
  return(pal);
}

int main(){
  int a,b,c;
  float d;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&a);
  printf("Ingrese el num dos \n");
  scanf("%d",&b);
  int x,z;
  while(x<=000000000 || x>=999999999){
    printf("dijite un numero de 9 cifras\n");
    scanf("%d", &x);
  }

  //Operaciones
  c=sumaNums(a,b);
  printf("El resultado de la suma es %d \n", c);
  
   c=restaNums(a,b);
  printf("El resultado de la resta es %d \n", c);
  
   c=multiNums(a,b);
  printf("El resultado de la multiplicacion es %d \n", c);
  
   d=diviNums(a,b);
  printf("El resultado de la division es %f \n", d);
  a = palindromo(x);
  if(a==1){
    printf("el numero es palindromo");
  }
  if (a==0){
    printf("el numero no es palindromo");
  }
  
  return 0;

}