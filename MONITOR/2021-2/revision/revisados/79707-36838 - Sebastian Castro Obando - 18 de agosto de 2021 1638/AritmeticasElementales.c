
//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int Suma(int x, int y){
  return x+y;
}
int Resta(int x, int y){
  return x-y;
}
int Multiplicacion(int x, int y){
  return x*y;
}
float Division(float x, float y){
  float result=0.0;
  if(y>0){
  result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}

int InvertirNum(int c){
  int Invertido=0, Resto;
  int x = c;
    while(c!=0){
        Resto=c%10;
        c=c/10;
        Invertido=Invertido*10+Resto;
       }
    if (Invertido == x){
      	printf("El numero es palindromo \n");
      	return Invertido;
    }
  	else{
  		printf("No es palindromo \n");
  		return Invertido;
  	}
     return Invertido;
}
int FechaBisiesto(int fecha){
	if (fecha % 4 == 0 && fecha % 100 != 0 || fecha % 400 == 0 ){
		printf("La fecha es bisiesta\n");
		return 1;
	}
	else{
		printf("La fecha no es bisiesta\n");
		return 0;
	}
}

int main(){
  int a,b,c,Respuesta,Respuesta2, fecha;
  float d;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&a);
  printf("Ingrese el num dos \n");
  scanf("%d",&b);

  printf("Ingrese un numero entero de 9 digitos\n");          
  scanf("%d", &c);
  Respuesta=InvertirNum(c);
  printf("El numero invertido es %d \n", Respuesta);

  //Operaciones
  printf("Ingrese la fecha a evaluar\n");
  scanf("%d",&fecha);
  Respuesta2 = FechaBisiesto(fecha);
  printf("Numero de hermanos: %d \n", Respuesta2);


  int ResultadoSuma = Suma(a,b);
  printf("Resultado en suma a y b %d \n", ResultadoSuma);
  
  int ResultadoResta = Resta(a,b);
  printf("Resultado en resta a y b %d \n", ResultadoResta);
  
  int ResultadoMultiplicacion=Multiplicacion(a,b);
  printf("Resultado en multipliacion a y b %d \n", ResultadoMultiplicacion);
  
  float ResultadoDivision=Division(a,b);
  printf("Resultado en division a y b %d \n", ResultadoDivision);
                                                                                                   
  return 0;
}