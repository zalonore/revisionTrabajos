
//Programa que recibe por teclado 2 numeros enteros y devuelve 
//el resultado de la suma, resta, multiplicación y división entre ellos

//Incluyo biblioteca de entrada/salida.
#include <stdio.h>

//Cada funcion lleva el nombre de la operacion matematica que realiza
int sumar(int sumandoUno, int sumandoDos){
  return sumandoUno + sumandoDos;
}
int restar(int minuendo, int sustraendo){
  return minuendo - sustraendo;
}
int multiplicar(int factorUno, int factorDos){
  return factorUno * factorDos;
}
float dividir(int  dividendo, int divisor){
  float cosciente=0.0;
  if(divisor>0){
	cosciente= (float)dividendo/ (float)divisor;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", dividendo, divisor);
  }
  return cosciente;
}
int revisarNro( int numero){
  int rduo, digitoUno, digitoDos, digitoTres, digitoCuatro,
  digitoCinco, digitoSeis, digitoSiete, digitoOcho;
  digitoUno = numero/100000000;
  rduo=numero-100000000*digitoUno;
  digitoDos = rduo/10000000;
  rduo=rduo-10000000*digitoDos;
  digitoTres = rduo/1000000;
  rduo=rduo-1000000*digitoTres;
  digitoCuatro = rduo/100000;
  rduo=rduo-100000*digitoCuatro;
  digitoCinco = rduo/10000;
  rduo=rduo-10000*digitoCinco;
  digitoSeis = rduo/1000;
  rduo=rduo-1000*digitoSeis;
  digitoSiete = rduo/100;
  rduo=rduo-100*digitoSiete;
  digitoOcho = rduo/10;
  rduo=rduo-10*digitoOcho;
  if (digitoUno==rduo && digitoDos==digitoOcho && digitoTres==digitoSiete && digitoCuatro==digitoSeis){
    printf("El numero ingresado es palindromo \n");
  }else{
    printf("El numero ingresado no es palindromo \n");
  }
}
int catalogarAno(int ano){
  if (ano%4==0){
    if (!(ano%100==0)){
      return 1;
    }else if (ano%400==0){
      return 1;
    }else{
      return 0;
    }
  }else{
    return 0;
  }
}
int main(){
  int nroUno,nroDos,resEntero,nroPalindromo,ano,anoBiciesto;
  float resFlotante;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el primer numero \n");
  scanf("%d",&nroUno);
  printf("Ingrese el segundo numero \n");
  scanf("%d",&nroDos);
  
  //Operaciones
  resEntero=sumar(nroUno, nroDos);
  printf("suma de los numeros       %d \n", resEntero);
  
   resEntero=restar(nroUno, nroDos);
  printf("diferencia de los numeros %d \n", resEntero);
  
   resEntero=multiplicar(nroUno, nroDos);
  printf("producto de los numeros   %d \n", resEntero);
  
   resFlotante=dividir(nroUno, nroDos);
  printf("cosciente de los numeros  %f \n", resFlotante);

  printf("Revisar numero \n");
  printf("Ingrese un numero de 9 digitos \n");
  scanf("%d",&nroPalindromo);
  revisarNro(nroPalindromo);

  printf("Catalogar ano \n");
  printf("Ingrese un ano \n");
  scanf("%d",&ano);
  anoBiciesto=catalogarAno(ano);
  if (anoBiciesto==1){
    printf("El ano %d es biciesto y mi nombre es Willian",ano);
  }else{
    printf("El ano %d No es biciesto y tengo 2 hermanos",ano);
  }
  
  return 0;

}