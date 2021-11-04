// Programa cuya funcionalidad es realizar operaciones de suma, resta,
// multiplicación y división dados dos números que se piden al usuario.

#include <stdio.h>


int sumarNumeros(int dig1, int dig2){
  return dig1+dig2;
}
int restarNumeros(int dig1, int dig2){
  return dig1-dig2;
}
int multiplicarNumeros(int dig1, int dig2){
  return dig1*dig2;
}
float dividirNumeros(int dig1, int dig2){
  float result=0.0;
  if(dig2>0){
	result= (float)dig1/ (float)dig2;
  }else{
	printf("No se puede hacer esta operación para los numeros %d--%d \n", dig1,dig2);
  }
  return result;
}

// verificar si el número de 9 dígitos es palíndromo

int invertir (int num){
    int digito;

    while (num > 0){
        digito = digito + num % 10;
        digito = digito * 10;
        num = num / 10; 
    }
    return digito/10;
}

// verificar el año bisiesto 

int anioBisiesto(int anio){
    int x;
    if((anio %4 == 0 && anio %100 != 0) || (anio %400 == 0)){
            x = 1;
        }else{
            x = 0;
        }
    return x;
}

int main(){
    int num1,num2,res;
    float res1;
    printf("Bienvenidos a este programa \n");
    printf("Ingrese el primer número \n");
    scanf("%d",&num1);
    printf("Ingrese el segundo número \n");
    scanf("%d",&num2);
  
    //Operaciones
    res=sumarNumeros(num1,num2);
    printf("Resultado de suma %d \n", res);
    
    res=restarNumeros(num1,num2);
    printf("Resultado de resta %d \n", res);
    
    res=multiplicarNumeros(num1,num2);
    printf("Resultado de multiplicación %d \n", res);
    
    res1=dividirNumeros(num1,num2);
    printf("Resultado de división %f \n", res1);
    
    // verificar si el numero de 9 dígitos es palíndromo

    int num = 0, invertido; 
    printf("Digite el numero: \n");
    scanf("%d",&num);
    invertido=invertir(num);
    if(num == invertido){
        printf("El número %d que digitó es palíndromo \n", num);
    }else{
        printf("El número %d que digitó NO es palíndromo \n", num);
        }   

    // año bisiesto 

    int anioIngresado, funcion, numHermanos; 
    char nombreIngresado[8];
    printf("Digite el anio deseado: \n");
    scanf("%d",&anioIngresado);
    printf("Digite el nombre \n");
    scanf("%s",nombreIngresado);
    printf("Digite el numero de hermanos \n");
    scanf("%d",&numHermanos);
    funcion= anioBisiesto(anioIngresado);
    if(funcion==1){
            printf("El anio %d es bisiesto y mi nombre es %s",anioIngresado,nombreIngresado);
        }else{
            printf("El anio %d no es bisiesto y tengo %d hermano(s)",anioIngresado,numHermanos);
        }
    return 0;

}
