#include <stdio.h>
#include <string.h>

char lineaAsteriscos(){
    int nOperaciones, num, count, count2, j;
	while (count2 < 10 && nOperaciones <= 10 && num >= 0){
	    printf("Digite el numero para la linea: ");
	    scanf("%d", &num);
	    if(num <= 0){
	        break;
	    }
	    count = 0;
	    while (count <= 1 && num <= 15){
		    for (j = 0; j <= num + 1; j++){
			    if (j == 0){
			    printf("%d ", num);
			}
			    else if (j == num + 1){
			    printf("%d\n", num);

			    }else{
			    printf("* ");

			    }	
		    }		
		count++;
		}
	count2++;
	}
}

int juego(){
    int i, veces, num, sum, count = 0, count2 = 0;
    float prom;
	printf("¿Cuantos numeros desea digitar?: ");
	scanf("%d", &veces);
	for (i = 1; i <= veces; i++){
		printf("Digite el numero N%d°: ", i);
		scanf("%d", &num);
		if (num < 50 || num > 80){
			printf("Numero erroneo (Recuerde que solo se aceptan numeros entre 50 y 80).\n");
		}
		else if (num != 71){
			sum += num;
		}
		else if (num == 71 && count == 0){
			printf("¡Felicidades!\n");
			count++;
		}
		else if (num == 71 && count == 1){
			printf("¡Felicidades! Puede venir el proximo dia por su premio.\n");
			count++;
		}
		else if (num == 71 && count >= 2){
			printf("Uy, como asi? Esto esta muy sospechoso!\n");
			count++;

		}
		else if (num >= 50 && num <= 60){
			count2++;
		}

	}
	prom = sum / (veces - count);
	printf("Usted digito %d numero(s) entre 50 y 60\n", count2);
	printf("El promedio de los numeros que no son 71 es de: %f", prom);
}

#include <stdio.h>
#include <string.h>
int laFarra(){
    char camion, llegaCam[] = "si", si[] = "si", no[] = "no";
    int cantidadProd = 0, countA = 0, count3 = 0, count4 = 0;
    int kiloP = 0, kiloT = 0, kiloC = 0, kiloN = 0, kiloM = 0;
   while (strcmp(llegaCam, si) == 0){
   if(strcmp(llegaCam, si) == 0){
      printf("Digite el tipo de camion (A,B): ");
      scanf("%s", &camion);
      if (camion == 'A'){
         countA++;
         printf("Digite el numero de bultos de papa que trajo: ");
         scanf("%d", &kiloP);
         kiloP += kiloP;
      }
      else{
         printf("Digite el numero de productos que trae: ");
         scanf("%d", &cantidadProd);
         if (cantidadProd == 2){
            printf("Digite el numero de kilos que trae de cada producto (Tomate y cebolla): ");
            scanf("%d %d", &kiloT, &kiloC);
            kiloC += kiloC;
         }
         else if(cantidadProd == 3){
            count3++;
            printf("Digite el numero de kilos que trae de cada producto (Tomate, cebolla y naranja): ");
            scanf("%d %d %d", &kiloT, &kiloC, &kiloN);
            kiloC += kiloC;
            kiloN += kiloN;
         }
         else if(cantidadProd == 4){
            count4++;
            printf("Digite el numero de kilos que trae de cada producto (Tomate, cebolla, naranja y mango): ");
            scanf("%d %d %d %d", &kiloT, &kiloC, &kiloN, &kiloM);
            kiloC += kiloC;
            kiloN += kiloN;
            kiloM += kiloM;
         }
       }
    printf("¿Ha llegado un nuevo camion? (si/no): ");
    scanf("%s", llegaCam);
   }
    if(strcmp(llegaCam, no) == 0){
        printf("\nLlegaron %d camiones tipo A a La Farra\n", countA);
    	printf("Llegaron %d camiones con 3 y 4 productos a La Farra\n", count3 + count4);
    	printf("Llegaron %dk de cebolla, %dk de naranja y %dkg de mango a La Farra", kiloC, kiloN, kiloM);
    }
   }
}

int primos3Dig(int n){
    int sumDig=0, i, count = 0,  x = 0;
    x = n;
    while(x > 0){
    sumDig = sumDig + x % 10;
    x = x / 10;
}
    for(i = 2; i <= sumDig; i++){
		if(sumDig % i == 0)
		    count++;
    }
    if(count == 1){
        printf("%d ", sumDig);
        count = 0;
    }
    
}

int nPrimos(){
    int num, numP, i, count = 0;
	printf("Digite el numero (mayor a 1000): ");
	scanf("%d", &num);
	for(numP = 2; numP <= num; numP++){
		for(i = 2; i <= numP; i++){
			if(numP % i == 0)
				count++;
		}
	if(count == 1 && numP > 99 && numP < 1000)
		printf("%d ",numP); //<---Numeros primos de 3 digitos
	    count = 0;
	    //primos3Dig(numP);   //<---Numeros que la suma de sus digitos es un numero primo
    }
}

int main(){
	int opcion;
	do{
		printf("\n1. Linea de Asteriscos\n");
		printf("2. Juego\n");
		printf("3. Tienda de Frutas 'La Farra'\n");
		printf("4. Numeros Primos\n");
		printf("5. SALIR\n");

		printf("Digite la opcion deseada: \n");
		scanf("%d", &opcion);
		switch(opcion){

			case 1:
				lineaAsteriscos();
				break;
			case 2:
				juego();
				break;
			case 3:
				laFarra();
				break;
			case 4:
				nPrimos();
				break;
		}
	}while(opcion != 5);
	
	return 0;
}
