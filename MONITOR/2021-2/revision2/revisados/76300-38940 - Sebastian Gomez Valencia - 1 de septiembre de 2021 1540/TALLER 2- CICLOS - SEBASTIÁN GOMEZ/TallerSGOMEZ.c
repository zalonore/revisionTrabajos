#include <stdio.h>
//1
void imprimirAstericos(){
  int linea;
  int contador= 1;
  int cont = 1;
  do{
      printf("\nDigite el numero para la linea:");
      scanf("%d",&linea);
      if (linea > 0)
      {
        printf("%d",linea);
        for (int i =0; i<linea; i++){
          printf(" * ");
        }
      printf("%d\n",linea);
      printf("%d",linea);
        int contador= 1;
        while (contador<=linea){
          printf(" * ");
          contador += 1;
        }
      printf("%d",linea);
      cont ++;
      }
  }while (cont <= 10 && linea > 0);
  
}
//2
void juegoNumeros(){
  int cantidadVeces;
  int numeroIngresado;
  int contador=1;
  int cont=0;
  int contadorVecesNum=0;
  int contadorNumeroRango=0;
  int sum;
  float promedio;
  printf("Ingrese la cantidad de numeros a ingresar: ");
  scanf("%d",&cantidadVeces);
  while (contador <= cantidadVeces)
  {
    printf("\nIngrese un numero:");
    scanf("%d",&numeroIngresado);
    if (numeroIngresado >= 50 && numeroIngresado <= 80 )
    {
      if (numeroIngresado>=50 && numeroIngresado<=60)
      {
        sum += numeroIngresado;
        contadorNumeroRango++;
      }
      else if (numeroIngresado==71)
      {
        contadorVecesNum ++;
        if (contadorVecesNum == 1)   
        printf("Felicitaciones\n");
        if (contadorVecesNum == 2)   
        printf("Felicitaciones, venga mañana por su premio\n");
        if (contadorVecesNum == 3)   
        printf("¡¡está muy sospechoso!!\n");
      }
      else 
      {
        sum += numeroIngresado;
        cont++;
      }
    }
    else
    {
      printf("Numero fuera de rango");
    }
  contador ++;
  
  }
  promedio=sum/(cont+contadorNumeroRango);
printf("Usted digito %d en el rango de 50 a 60\n",contadorNumeroRango);
printf("El promedio de los numeros digitados (sin considerar el 71) es: %0.2f",promedio);
}
//3
void productosLaFarra(){
  int camionesTipoA, contadorA, camionesTipoB, contadorB=1, cantProductos;
  int cantTomate,cantCebolla, cantNaranjas, cantMangos, cantCamionetas3=0,cantCamionetas4;
  int sumCebolla, sumNaranjas, sumMangos;
  const int DIAS =7;
  printf("BIENVENIDO A LA FARRA - SUPERMERCADO \nLLEGADA DE MERCANCIA-CAMIONES\nMUELLE 12\n");
  for (int dias=1; dias<=DIAS;dias++ ){
    printf("\n-------DIA %d---------\n", dias);
    printf("Cuantos camiones del tipo A llegaron: ");
    scanf("%d",&camionesTipoA);
    if (camionesTipoA>0)
     {
      contadorA += camionesTipoA;
     }
    printf("\nCuantos camiones del tipo B llegaron: ");
    scanf("%d",&camionesTipoB);
    contadorB=1;
    do{
      printf("\nCuantos productos trae el camion %d?: ",contadorB);
      scanf("%d",&cantProductos);
      if (cantProductos>=2 && cantProductos<=4){
        if (cantProductos==2){
          printf("¿Cuantos kilos de tomate trae? --> ");
          scanf("%d",&cantTomate);
          printf("¿Cuantos kilos de cebolla trae? --> ");
          scanf("%d",&cantCebolla);
          sumCebolla += cantCebolla;
          contadorB++;
        }
        if (cantProductos==3){
          printf("¿Cuantos kilos de tomate trae? --> ");
          scanf("%d",&cantTomate);
          printf("¿Cuantos kilos de cebolla trae? --> ");
          scanf("%d",&cantCebolla);
          printf("¿Cuantos kilos de naranja trae? --> ");
          scanf("%d",&cantNaranjas);
          sumCebolla += cantCebolla;
          sumNaranjas += cantNaranjas;
          cantCamionetas3++;
          contadorB++;
        } 
        if (cantProductos==4){
          printf("¿Cuantos kilos de tomate trae? --> ");
          scanf("%d",&cantTomate);
          printf("¿Cuantos kilos de cebolla trae? --> ");
          scanf("%d",&cantCebolla);
          printf("¿Cuantos kilos de naranja trae? --> ");
          scanf("%d",&cantNaranjas);
          printf("¿Cuantos kilos de mango trae? --> ");
          scanf("%d",&cantMangos);
          sumCebolla += cantCebolla;
          sumNaranjas += cantNaranjas;
          sumMangos += cantMangos;
          cantCamionetas4++;
          contadorB++;
        }
      }
    }while(contadorB<=camionesTipoB); 
  }
  printf("\nLlegaron %d  camiones de Tipo A al Supermercado - LA FARRA\n",contadorA);
    printf("\nLlegaron %d de Tipo B con 3 productos\n",cantCamionetas3);
    printf("\nLlegaron %d de Tipo B con 4 productos\n",cantCamionetas4);
    printf("\nEn total fueron\n");
    printf("\n%d Kilos de Cebolla\n%d Kilos de Naranja\n%d Kilos de Mango",sumCebolla,sumNaranjas,sumMangos);
}

//4
void numerosPrimos(){
int numeroN, contador, divisionCont, sumaDigitos;
int numerosCuenta, contadorPrim3=0, digitoPrimo, numeroPrimo;
printf("Ingrese el valor de N:");
scanf("%d",&numeroN);
do{
 int es_primo=0;
 for(int i=1;i<=numeroN;i++)
 {
  if(numerosCuenta%i==0)
  es_primo++;
 }
 if (es_primo==2){ 
 if(numerosCuenta>100 && numerosCuenta<=1000){
   printf("%d ", numerosCuenta);
   contadorPrim3++;
 }
 }
 numerosCuenta++;
}while (numerosCuenta<=numeroN);
printf("\nSon %d numeros primos de tres digitos",contadorPrim3 );
printf("\n--------- Primos donde la suma de sus digitos es primo-------\n");
contador=1;
do{
  divisionCont=0;
  for (int i=1; i<=contador/2; i++){
    if (contador%i==0){
      divisionCont++;
    }
  }
  if (divisionCont<2 && contador>10){
    numeroPrimo= contador;
    sumaDigitos=0;
    while (numeroPrimo != 0){
      digitoPrimo = numeroPrimo %10;
      numeroPrimo = numeroPrimo/10;
      sumaDigitos += digitoPrimo;
    }
    divisionCont=0;
    for(int i =0; i < sumaDigitos/2; i++){
      if(sumaDigitos%1==0){
        divisionCont++;
      }
    }
    if (divisionCont<2){
      printf("\n%d == %d",contador, sumaDigitos);
    }
  }
  contador++;
}while(contador<=numeroN);
}

void menu(int opcionMenu){
  switch(opcionMenu)
    {
      case 1:imprimirAstericos();
      break;
      case 2:juegoNumeros();
      break;
      case 3:productosLaFarra();
      break;
      case 4:numerosPrimos();
      break;
    
    }
}

int main(void){
  int opcion;
  do{
    printf("\n\n1)Ejercicio 1\n2)Ejercicio 2\n3)Ejercicio 3\n4)Ejercicio 4\n5)Salir\n");
    printf("Ingrese que ejercicio desea realizar:");
    scanf("%d",&opcion);
    menu(opcion);
  }while (opcion != 5);
  








}