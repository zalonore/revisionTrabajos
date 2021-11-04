//Incluyo biblioteca de entrada/salida.
#include <stdio.h>

int sumarNumeros(int sumando, int sumando1){
  // suma los numeros que se pasan por parametro y retorna el resultado
  return sumando+sumando1;
}

int restarNumeros(int minuendo, int sustraendo){
  // resta los numeros que se pasan por parametro y retorna el resultado
  return minuendo-sustraendo;
}

int multiplicarNumeros(int factor, int factor1){
  // multiplica los numeros que se pasan por parametro y retorna el resultado
  return factor*factor1;
}

float dividirNumeros(int dividendo, int divisor){
  // multiplica los numeros que se pasan por parametro y retorna el resultado
  float result=0.0;
  // el condicional sirve para que en caso de que se quiera dividir entre 0 de un error ya que esta operacion no se puede hacer
  if(divisor>0){
	result= (float)dividendo/ (float)divisor;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", dividendo,divisor);
  }
  return result;
}

int comprobarBisiesto(int ano){
  //retorna 1 si un año que se pasa por parametro es bisiesto si no retorna 0
  int ans = 0;
  if(ano % 4 == 0 && (ano % 100 != 0 || ano %400 ==0)){
    ans = 1;
  }
  return ans;
}

void comprobarPalindromo(int n){
  //nos imprime si un numero que pasamos por parametro es palindromo
  int n1 = n, modulador = 1, numero = 0, nInverso = 0, multiplicador = 1, contador;
  // el siclo nos ayuda a saber el tamaño del numero ingresado
  for(contador = 1; n / multiplicador > 10; contador++){
    multiplicador *= 10;
  }
  //crea un numero que es igual a invertir el numero que el usuario nos dio
  for(int contador1 = 1;contador1 <= contador;contador1++){
    numero = (n1%(modulador*10));
    nInverso += (multiplicador * (numero/(modulador)));
    n1 -= numero;
    multiplicador /= 10;
    modulador *= 10;
  }
  // el condicional compara el numero invertido que se creo con el original y nos dice si el numero es o no palindromo
  if(n == nInverso){
    printf("El numero %d es palindromo \n", n);
  }else{
    printf("El numero %d no es palindromo \n", n);
  }
}

int main(){
  // llama a las funciones y procedimiento anteriores y optiene y crea los datos necesarios para cumplir la funcion del programa
  int numero,numero1,resultado,ano, palindromoInput, bros = 1;
  char name[20] = "William" ;
  float cociente;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&numero);
  printf("Ingrese el num dos \n");
  scanf("%d",&numero1);
  
  //Operaciones
  resultado=sumarNumeros(numero,numero1);
  printf("El Resultado de la suma es %d \n", resultado);
  
   resultado=restarNumeros(numero,numero1);
  printf("El Resultado de la resta es %d \n", resultado);
  
   resultado=multiplicarNumeros(numero,numero1);
  printf("El Resultado de la multiplicacion es %d \n", resultado);
  
   cociente=dividirNumeros(numero,numero1);
  printf("El Resultado de la division es %f \n", cociente);
  
  //optiene el año que el usuario quiera dijitar
  printf("Ingresa el ano \n");
  scanf("%d",&ano);
  resultado = comprobarBisiesto(ano);
  //dependiendo de lo que retorne la funcion imprime si el año es bisiesto o no ademas de un mensaje extra dependiendo del caso
  if(resultado == 1){
    printf("El ano %d es bisiesto y Mi nombre es %s \n", ano, name);
  }
  else{
    printf("El ano %d no es bisiesto y tengo %d hermano(s) \n", ano, bros);
  }
  printf("Ingrese un numero de 9 digitos el cual quiera saber si es palindromo \n");
  scanf("%d",&palindromoInput);
  comprobarPalindromo(palindromoInput);

  return 0;

}