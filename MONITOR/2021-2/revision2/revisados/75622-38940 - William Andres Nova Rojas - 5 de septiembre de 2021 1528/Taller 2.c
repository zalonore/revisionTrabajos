#include <stdio.h>

void hacerCiclosAsterisco( int numeroAsteriscos ){
	printf( "%d *", numeroAsteriscos );
	for( int i = 1; i < numeroAsteriscos;i++ ){
		printf( "  *" );
	}
	printf( " %d\n", numeroAsteriscos );
}

void ejecutarLineaAsteriscos(){
	int numeroAsteriscos, i = 1;
	do{
		printf( "Digite un numero para la linea: " );
		scanf( "%d", &numeroAsteriscos );
		printf( "\n" );
		if( numeroAsteriscos <= 15 &&  numeroAsteriscos > 0){
			hacerCiclosAsterisco( numeroAsteriscos );
			hacerCiclosAsterisco( numeroAsteriscos );
		}
		printf( "\n" );
		i++;

	}while( numeroAsteriscos > 0 && i <= 10);
}


void ejecutarJuegoNumeros(){
	int vecesDigitos, contador = 0 , veces71 = 0;
	float digitos, promedio, sumatoriaDigitos = 0.0;
	printf("Ingrese el numero de veces que digitara numeros: ");
	scanf( "%d", &vecesDigitos );
	for( float i = 1;i <= vecesDigitos;i++ ){
		printf( "ingrese digito: " );
		scanf( "%f", &digitos );
		while(digitos < 50 || digitos > 80){
			printf("Solo puedes escribir numeros entre el 50 y 80, ingrese un numero valido: ");
			scanf("%f", &digitos);
		}

		if(digitos >= 50 && digitos <=60){
			contador++;
		}
		if(digitos != 71){
			sumatoriaDigitos += digitos;
		}
		else if( digitos == 71 ){
			veces71++;
			switch(veces71){
				case 1:
					printf( "Felicidades\n" );
				break;

				case 2:
					printf( "Felicidades ven maniana por un premio\n" );
				break;

				case 3:
					printf( "esta muy sospechoso!!\n" );
				break;

			}
		}
	}
	promedio = sumatoriaDigitos/( ( float )vecesDigitos - veces71);
	if(vecesDigitos == veces71){
		promedio = 0;
	}
	printf( "\nEl promedio de los numeros que escribio es de: %f\n", promedio );
	printf( "Has escrito %d veces un numero entre 50 y 60\n\n", contador );
}

void hacerInventario(){
	int total, camionesA = 0, papa, tipo, cebolla, tomate, naranja, mango, tipo3 = 0, tipo4 = 0, totalCebolla = 0, naranjaTotal = 0, mangoTotal = 0;
	char camion[0];
	printf("Cuantos Camiones llegaron a La Farra hoy?\n");
	scanf("%d", &total);
	for( int i = 1 ; i <= total ; i++){
		printf("camion numero %d, que tipo es ? \n", i);
		scanf("%s", camion);
		camion[0] &= 0xDF;
		if( camion[0] == 65){
			camionesA++;
			printf("Cuantos Kilos de papa trae el camion: ");
			scanf("%d", &papa);
		}else if(camion[0] == 66){
			do{
				printf("Cuantos productos trae?\n");
				scanf("%d", &tipo);			
			}while(tipo < 2 || tipo > 4);
			switch(tipo){
				case 2:
					printf("Cuantos kilos de tomate trae: ");
					scanf("%d", &tomate);
					printf("Cuantos kilos de cebolla trae: ");
					scanf("%d", &cebolla);
					totalCebolla += cebolla;
				break;

				case 3:
					tipo3++;
					printf("Cuantos kilos de tomate trae: ");
					scanf("%d", &tomate);
					printf("Cuantos kilos de cebolla trae: ");
					scanf("%d", &cebolla);
					totalCebolla += cebolla;
					printf("Cuantos kilos de Naranja trae: ");
					scanf("%d", &naranja);
					naranjaTotal += naranja;
				break;

				case 4:
					tipo4++;
					printf("Cuantos kilos de cebolla trae: ");
					scanf("%d", &cebolla);
					totalCebolla += cebolla;
					printf("Cuantos kilos de Naranja trae: ");
					scanf("%d", &naranja);
					naranjaTotal += naranja;
					printf("Cuantos kilos de mango trae: ");
					scanf("%d", &mango);
					mangoTotal += mango;
					printf("Cuantos kilos de tomate trae: ");
					scanf("%d", &tomate);
				break;

			}
		}else{
			printf("camion %d que tipo es ? \n", i);
			scanf("%s", camion);
			camion[0] &= 0xDF;
			i--;
		}
	}
	printf("\nllegaron %d camines tipo A a La Farra\n", camionesA);
	printf("llegaron %d cambiones de tipo 3 y %d camines tipo 4\n", tipo3, tipo4);
	printf("Legaron:\n%d kilos de cebolla\n%d kilos de naranja\n%d kilos de mangos\na La Farra\n\n", totalCebolla, naranjaTotal, mangoTotal);
}

int sumarDigitos( int n ){
	int modulador = 1, numero = 0, sumaDigitos = 0, multiplicador = 1, contador = 1;
  	while(n / multiplicador > 1){
    	multiplicador *= 10;
    	contador++;
  	}
  	for( int contador1 = 1; contador1 <= contador; contador1++ ){
  		numero = (n%(modulador*10));
		sumaDigitos += ((numero/(modulador)));
		n -= numero;
		multiplicador /= 10;
		modulador *= 10;
  	}
	return sumaDigitos;
}

int verificarPrimo(int numero){
	for( int i = 2; i < numero;i++ ){
		if ( numero % i == 0 || numero == 1){
			return 0;
		}
	}
	return 1;
}

void ejecutarNumerosPrimos(){
	int limite, confirmador, primos3Digitos = 0, iteradorWhile = 2, primoDoble, confirmador2;
	do{
		printf( "Digite un numero mayor a mil: " );
		scanf( "%d", &limite );
	}while(limite < 1000);
	for(int i = 0; i < 3; i++){
		switch(i){
			case 0:
				printf("La lista de numeros primos del 1 al %d son:\n", limite);
			break;

			case 1:
				printf("Hay %d numeros de 3 digitos y son:\n", primos3Digitos);	
			break;

			case 2:
				printf("Los numeros primos cuyos digitos sumados dan otro primo son:\n");
			break;
		}
		
		while(iteradorWhile <= limite){
			confirmador = verificarPrimo(iteradorWhile);
			if(confirmador == 1){
				if(i == 0){
					printf("%d, ",iteradorWhile);
				}
				if(iteradorWhile >= 100 && iteradorWhile < 1000 && i == 0 ){
					primos3Digitos++;
				}
				if(i == 1 && iteradorWhile / 100 >= 1 && iteradorWhile / 1000 <1){
					printf("%d, ", iteradorWhile);
				}
				if(i == 2 && iteradorWhile >= 10){
					primoDoble = sumarDigitos(iteradorWhile);
					confirmador2 = verificarPrimo(primoDoble);
					if(confirmador2 == 1){
						printf("%d, ", iteradorWhile);
					}
				}

			}
			iteradorWhile++;
		}
		printf("\n\n");
		iteradorWhile = 2;
	}
	
}


void menu(){
	int escogerPunto;

	do{
		printf( "Menu\n\nDigite el numero del punto que quiere ejecutar\n\n1 = La linea de asteriscos\n\n2 = Juego de numeros\n\n3 = Tieda La Farra\n\n4 = Numeros primos\n\n5 = Salir\n\nCual quieres ejecutar? : " );
		scanf( "%d", &escogerPunto );
		printf("\n");
		switch(escogerPunto){
			case 1:
				ejecutarLineaAsteriscos();
			break;

			case 2:
				ejecutarJuegoNumeros();
			break;

			case 3:
				hacerInventario();
			break;
			case 4:
				ejecutarNumerosPrimos();
			break;
		}
	}while( escogerPunto != 5 );
}

void main(){
	menu();

}