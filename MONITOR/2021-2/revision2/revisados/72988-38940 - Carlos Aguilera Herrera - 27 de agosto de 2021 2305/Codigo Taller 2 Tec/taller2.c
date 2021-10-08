// Codigo desarrollado por: Andres Aguilera
// En solucion al taller 2 de Tecnicas de programacion
// 08-2021

#include <stdio.h> 

void menuTaller2();
void Punto1();
void Punto2();
void Punto3();
void Punto4();
int  esPrimo(int numero);

int main(){
	
	printf("\n");
	printf("\n");
	printf("Bienvenidos al Menu del taller 2 \n");
	printf("El taller consta de 4 puntos, digital el numero del punto que desees resolver \n");
	printf("En caso de no querer reolver mas puntos del taller, digite 0 \n");
		
	menuTaller2();
	
	return 0;
}

void menuTaller2(){ // Menu general del taller 2 para elegir punto a resolver
	int SeleccionPuntoTaller2;
	do{
		printf("\n");
		printf("Puntos del taller 2:\n");
		printf("Numero 0: Para salir \n");
		printf("Punto  1: La linea de asteriscos \n");
		printf("Punto  2: Juego con numeros entre 50 y 80 \n");
		printf("Punto  3: Mercancia de la tienda La Farra \n");
		printf("Punto  4: Primos en un rango \n");
		printf("\n");
		
		printf("El punto a resolver es: ");
		scanf("%d",&SeleccionPuntoTaller2);
		printf("\n");
		switch(SeleccionPuntoTaller2){
			case 0:
				printf("Saliste del programa \n");
				printf("\n");
				break;
				
			case 1:
				Punto1();
				break;
				
			case 2:
				Punto2();
				break;
				
			case 3:
				Punto3();
				break;
				
			case 4:
				Punto4();
				break;
				
			default:
				printf("El numero digitado no corresponde a un punto del taller 2");
				printf("\n");
				break;
		}
		
	}
	while(SeleccionPuntoTaller2 != 0);
}

void Punto1(){ // Imprimir 2 lineas de astericos, con la cantidad deseada por teclado.
	int NumAstericos;
	int i, ContAsteriscos = 0, ContIntentos = 0;
	
	do{
		printf("\n");
		printf("Digite la cantidad de asteriscos para la linea: ");
		scanf("%d",&NumAstericos);
		
		if (NumAstericos>0 && NumAstericos<15){
			ContIntentos++;
			for(i=1; i<=2; i++){
				
				printf("%d ",NumAstericos);
				while(ContAsteriscos<NumAstericos){
					printf("* ");
					ContAsteriscos++;
				}
				printf("%d",NumAstericos);
				printf("\n");
				ContAsteriscos = 0;
			}
		}
	}
	while(NumAstericos>0 && ContIntentos<10);
}

void Punto2(){ // Juego con numeros entre 50 y 80
	int Num;
	int CantNum;
	int i, Cont71=0, Cont50_60=0;
	int prom=0;

	printf("Cuantas veces digitara un numero entre 50 y 80: ");
	scanf("%d",&CantNum);
	printf("\n");
	
	for(i=0; i<CantNum; i++){
		printf("Digite un numero entre 50 y 80: ");
		scanf("%d",&Num);
		if (Num>=50 && Num<=80){
			
			if (Num==71){
				Cont71++;
				switch(Cont71){
					case 0:
						printf("Aun no le pegas \n");
						printf("\n");
						break;
					case 1:
						printf("Felicitaciones \n");
						printf("\n");
						break;
					case 2:
						printf("Felicitaciones, venga manana por su premio \n");
						printf("\n");
						break;
					case 3:
						printf("esta muy sospechoso \n");
						printf("\n");
						break;
					default:
						printf("esta muy sospechoso \n");
						printf("\n");
						break;
				}
			}
			else{
				prom+=Num;
			}
			
			if (Num>=50 && Num<=60){
				Cont50_60++;
			}
			
			
		} 
		else{
			printf("El numero digitado esta por fuera del rango entre 50 y 80 \n");
			printf("\n");
			i--;
		}
	}
	prom /= (CantNum-Cont71);
	printf("\n");
	printf("El promedio es: %d \n", prom);
	printf("La cantidad de numeros entre 50 y 60 es: %d \n", Cont50_60);
	
}

void Punto3(){ // Conteo mercancia de la tienda
	int Camiones_A;
	int Bultos_A;
	int CanBultos_A=0, i;
	
	int Camiones_B;
	int Productos_B;
	
	int tomate, cebolla, naranja, mango;
	int totalTomate=0, totalCebolla=0, totalNaranja=0, totalMango=0;
	
	int Cant_3 = 0, Cant_4 = 0;
	
	printf("Cuantas camiones del tipo A llegaron: ");
	scanf("%d",&Camiones_A);
	for (i=0; i<Camiones_A; i++){
		printf("Cuantos bultos de papa trajo en la carga el camion %d: ", i+1);
		scanf("%d",&Bultos_A);
		CanBultos_A += Bultos_A;
	}	
	printf("\n");
	
	printf("Cuantas camiones del tipo B llegaron: ");
	scanf("%d",&Camiones_B);
	for (i=0; i<Camiones_B; i++){
		printf("Cuantos productos trae el camion %d: ", i+1);
		scanf("%d",&Productos_B);
		switch (Productos_B){
			case 2:
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&tomate);
				totalTomate += tomate;
				
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&cebolla);
				totalCebolla  += cebolla;
				break;
				
			case 3:
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&tomate);
				totalTomate += tomate;
				
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&cebolla);
				totalCebolla  += cebolla;
				
				printf("Cuantos kilos de naranja trae: ");
				scanf("%d",&naranja);
				totalNaranja += naranja;
				
				Cant_3++;
				break;
				
			case 4:
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&tomate);
				totalTomate += tomate;
				
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&cebolla);
				totalCebolla  += cebolla;
				
				printf("Cuantos kilos de naranja trae: ");
				scanf("%d",&naranja);
				totalNaranja += naranja;
				
				printf("Cuantos kilos de mango trae: ");
				scanf("%d",&mango);
				totalMango += mango;
				
				Cant_4++;
				break;
				
			default:
				printf("Cantidad NO especificada");
				break;
		}
		printf("\n");
	}
	
printf("La cantidad de camiones tipo A que llegaron es %d \n", Camiones_A);
printf("Con un total de %d bultos de papa \n", CanBultos_A);
printf("Del tipo B llegaron %d camiones del 3 y %d camiones del 4 \n",Cant_3,Cant_4);
printf("se tiene %d kilos de cebolla, %d kilos de naranja, %d kilos de mango y %d kilos de tomate \n",totalCebolla,totalNaranja,totalMango,totalTomate);

	
	
}

void Punto4(){ // Numeros primos en un rango de 1 a N
	
	int N; 
	int i, Cont_3Digitos=0;

    printf("Para buscar los primos en el rango 1 hasta N, digite N: ");
    scanf("%d", &N);
	
	if (N>=1000){
        int contador = 0;
		for (i = 1; i <= N; i++) {
			if (esPrimo(i)) {
			  contador++;
			  if(i>=100 && i<1000){
				  printf("%d,", i);
				  Cont_3Digitos++;
			  }
			}
		}
		printf("\n");
		printf("\n");
		printf("Total de primos con 3 digitos: %d \n", Cont_3Digitos);
		printf("\n");
	}
	else {
		printf("Digita un rango mayor a 1000 \n");
		printf("\n");
	}
}

int  esPrimo(int numero) { // Define si un numero es primo o no
	if (numero == 0 || numero == 1) return 0;

	if (numero == 4) return 0;

	for (int x = 2; x < numero / 2; x++) {
		if (numero % x == 0) return 0;
	}

	return 1;
}
