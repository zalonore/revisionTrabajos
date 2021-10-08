# include<stdio.h>
void jugarAsteriscos(){
	int numero, contadorLinea = 1;
	do{
		printf("Digite un numero: ");
		scanf("%d", &numero);
		if (numero > 0 && numero < 16){
			int contadorIt = 0;
			while(contadorIt < 2){
				printf("%d ", numero);
				int i;
				for(i=0; i < numero; i++){
					printf("* ");
				}
				printf("%d\n", numero);
				contadorIt++;
			}
		contadorLinea++;
		}

	}while(numero > 0 && contadorLinea < 11);

}
void jugarNumeros(){
	int numero, limite, contador = 0,suma = 0, contador71 = 0, contadorRango = 0;
	float promedio;
	printf("cuantos numeros digitara?: "); scanf("%d", &limite); printf("\n");
	printf("\nNumeros en un rango de 50 a 80\n");
	do{
		printf("Digite un numero: ");
		scanf("%d", &numero);
		if(numero >= 50 && numero <=80){
			if(numero == 71){
				contador71++;
				if(contador71 == 1)
					printf("Felicitaciones!\n");
				if(contador71 == 2)
					printf("Felicitaciones, ven manana por tu premio\n");
				if(contador71 ==3)
					printf("Andas sospechoso\n");

			}else if(numero >= 50 && numero <= 60){
				contadorRango++;
				suma += numero;

			}
			contador++;
		}else{
			printf("Este numero esta fuera del rango\ndigite un nuevo numero\n");
		}

	}while(contador < limite);
	if(contadorRango != 0){
		promedio = suma/contadorRango;
	}else{
		promedio=0;
	}
	printf("el promedio de los numeros entre 50 y 60 es: %f\n", promedio);
}
 void contarProductos(){
	int dias=1, opcion, cantidad, camA, camB, i, productos, contadorCamA = 0, contadorCamB3 = 0, contadorCamB4 = 0, sumaCe = 0, sumaNa = 0, sumaMa = 0;
	while(dias <=7){  
		printf("Bienvenido\nDia %d",dias);
		printf("\nLLEGADA DE LOS CAMIONES");
		printf("\nCuantos camiones tipo A llegaron: ");
		scanf("%d", &camA);
		contadorCamA += camA;
		printf("\nCuantos camiones tipo B llegaron: ");
		scanf("%d", &camB);
		if(camB>0){
			i = 1;
			do{
				printf("\n%d Camion",i);
				printf("\nCuantos productos trae?");
				scanf("%d", &productos);
				switch(productos){
					case 2:
						printf("\nkilos de tomate traidos: ");
						scanf("%d", &cantidad);
						printf("\nkilos de cebolla traidos: ");
						scanf("%d", &cantidad);
						sumaCe += cantidad;
						i++;
						break;
					case 3:
						printf("\nKilos de tomate traidos: ");
						scanf("%d", &cantidad);
						printf("\nkilos de cebolla traidos: ");
						scanf("%d", &cantidad);
						sumaCe += cantidad;
						printf("\nkilos de naranja traidos: ");
						scanf("%d", &cantidad);
						sumaNa += cantidad;
						contadorCamB3++;
						i++;
						break;
					case 4:
						printf("\nKilos de tomate traidos: ");
						scanf("%d", &cantidad);
						printf("\nkilos de cebolla traidos: ");
						scanf("%d", &cantidad);
						sumaCe += cantidad;
						printf("\nkilos de naranja traidos: ");
						scanf("%d", &cantidad);
						sumaNa += cantidad;
						printf("\nkilos de mango traidos: ");
						scanf("%d", &cantidad);
						sumaMa += cantidad;
						contadorCamB4++;
						i++;
						break;
					default:
						printf("\nOpcion invalida\n");
				}

			}while(i<camB);
		}

		dias++;
	}
	printf("\nLa Farra recibio %d camiones tipo A\n", contadorCamA);
	printf("La Farra recibio %d camiones tipo B de 3 productos\n", contadorCamB3);
	printf("La Farra recibio %d camiones tipo B de 4 productos\n", contadorCamB4);
	printf("La Farra recibio %d k de cebolla, %d k de mango y %d k de naranja", sumaCe, sumaMa, sumaNa);
}
void evaluarPrimos(){
	int num, contDiv, i, contador, contPrimosTres, numPrimo, digito, sumaDigito;
	printf("\nNumeros primos\n");
	printf("Digite un numero mayor a 1000: ");
	scanf("%d", &num);
	if(num >1000){
		printf("\nNumeros primos de 1 a %d\n", num);
		contador = 1;
		do{
			contDiv = 0;
			for(i = 1; i <= contador/2; i++){
				if(contador%i == 0){
					contDiv++;
				}
			}
			if(contDiv<2){
				printf("\n-%d", contador);
			}
			contador++;
		}while(contador<=num);
		contPrimosTres = 0;
		contador = 101;
		printf("\nNumeros primos de tres cifras\n");
		do{
			contDiv = 0;
			for(i = 1; i <= contador/2; i++){
				if(contador%i == 0){
					contDiv++;
				}
			}
			if(contDiv<2){
				printf("\n-%d", contador);
				contPrimosTres++;
			}
			contador++;
		}while(contador<=num);
		printf("\n Los numeros primos de tres cifras son: %d\n", contPrimosTres);
		printf("\nNumeros primos especiales\n");
		printf("La suma de sus digitos resulta un primo\n");
		contador = 1;
		do{
			contDiv = 0;
			for(i = 1; i <= contador/2; i++){
				if(contador%i == 0){
					contDiv++;
				}
			}
			if(contDiv<2 && contador>10){
				numPrimo = contador;
				sumaDigito = 0;
				while(numPrimo != 0){
					digito = numPrimo % 10;
					numPrimo /= 10;
					sumaDigito += digito;
				}
				contDiv = 0;
				for(i = 1; i <= sumaDigito/2; i++){
					if(sumaDigito%i == 0){
						contDiv++;
					}
				}
				if(contDiv<2){
					printf("\n- %d == %d", contador, sumaDigito);
				}
			}
			contador++;
		}while(contador<=num);
	}
}
void menu(){
	int opcion=-1;
	do{
		printf("\nBienvenido\n");
		printf("Elija una opcion\n");
		printf("1. Asteriscos\n");
		printf("2. Juego de numeros\n");
		printf("3. La Farra\n");
		printf("4. Numeros primos\n");
		printf("0. Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				jugarAsteriscos();
				break;
			case 2:
				jugarNumeros();
				break;
			case 3:
				contarProductos();
				break;
			case 4:
				evaluarPrimos();
				break;
			case 0:
				break;
			default:
				printf("Digite una opcion valida\n");
		}
	}while(opcion != 0);

}
int main(){
	menu();
	return 0;
}