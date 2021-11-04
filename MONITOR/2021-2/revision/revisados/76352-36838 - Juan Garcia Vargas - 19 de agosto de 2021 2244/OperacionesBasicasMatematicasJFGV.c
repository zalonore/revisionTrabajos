
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int operacionSuma(int numeroUno, int numeroDos){
  return numeroUno+numeroDos;
}
int operacionResta(int numeroUno,int numeroDos){
  return numeroUno-numeroDos;
}
int operacionProducto(int numeroUno, int numeroDos){
  return numeroUno*numeroDos;
}
float operacionDivision(int numeroUno, int numeroDos){
  float cociente=0.0;
  if(numeroDos>0){
	cociente= (float)numeroUno/ (float)numeroDos;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", numeroUno,numeroDos);
  }
  return cociente;
}

int encontrarAmn(int amm)
{
	if (amm%4 == 0)
	{
		if (amm&100 != 0)
		{
			printf("el anio es bisiesto y mi nombre es Juan Francesco Garcia Vargas\n");
		}
	}

	if (amm%400 == 0)
	{
		printf("el anio es bisiesto y mi nombre es Juan Francesco Garcia Vargas");
	}
	else 
	printf("el anio no es bisiesto y tengo 1 herman@s");

}




int main(){
  int primerNumeroDigitado,segundoNumeroDigitado,resultado_sum_res_prod;
  float resultado_divi;
  printf("Bienvenidos a este programa\n");
  printf("Ingrese el numero uno \n");
  scanf("%d",&primerNumeroDigitado);
  printf("Ingrese el numero dos \n");
  scanf("%d",&segundoNumeroDigitado);
  
  //Operaciones
  resultado_sum_res_prod=operacionSuma(primerNumeroDigitado,segundoNumeroDigitado);
  printf("Resultado operacion uno, para la suma %d \n", resultado_sum_res_prod);
  
  resultado_sum_res_prod=operacionResta(primerNumeroDigitado,segundoNumeroDigitado);
  printf("Resultado operacion dos, para la resta %d \n", resultado_sum_res_prod);
  
  resultado_sum_res_prod=operacionProducto(primerNumeroDigitado,segundoNumeroDigitado);
  printf("Resultado operacion tres, para el producto %d \n", resultado_sum_res_prod);
  
  resultado_divi=operacionDivision(primerNumeroDigitado,segundoNumeroDigitado);
  printf("Resultado operacion cuatro, para el cociente %f \n", resultado_divi);


  printf("ingrese el anio\n");
  int ammBisiesto,digitos;
  scanf("%d",&digitos);
  
  // Operaciones 2
  ammBisiesto = encontrarAmn(digitos);

  return 0;

}

// programa numeros palindromos
int palo()
{
int w,x,y,z;
printf("introduzca el numero a verificar si es palindromo\n");	
scanf("%d",&w);
x=w;
y=0;
z=0;
while(x!=0)
	{
		y = x%10;
		x = x/10;
		z = z*10+y;
		}
	if (z==w)
	{
		printf("el numero es palindromo\n");
	}
	else
		printf("el numero no es palindromo\n");
	
}

