#include <stdio.h>

/* Punto 1 */

void producirAsteriscos(){

	int asteriscos, i, j, repeticiones = 0;

		do{
			printf("Digite el numero de asteriscos: ");
			scanf("%d", &asteriscos);
			printf("\n");
			} while (asteriscos > 16);

		while(asteriscos > 0 && repeticiones < 10){
			i = 0;
			if(asteriscos < 16){
				repeticiones++;
				do{
					printf("%d ", asteriscos);
					for(j = 0; j < asteriscos; j++){
						printf("* ");
					}
					printf("%d", asteriscos);
					printf("\n");
					i++;
				} while(i < 2);
			} 
			if(repeticiones < 10){
				printf("\n");
				printf("Digite el numero de asteriscos: ");
				scanf("%d", &asteriscos);
				printf("\n");
			}
		}

}

/* Punto 2 */ 

/* Nota: profe, he intentado de mucha maneras, pero no sé por qué el programa no sale del ciclo while, incluso cambié
         la estructura pues antes tenía un for. Si por favor me puedes indicar aquello que está mal, te lo agradecería. */

void jugarNumeros(){

	int numero, repeticiones, i = 0, counter = 0, counter71 = 0, total = 0;
	float promedio;

	printf("Digite la cantidad de veces que digitara un numero: ");
	scanf("%d", &repeticiones);

	while(i < repeticiones){

		do{
		printf("Digite un numero entre 50 y 80: ");
		scanf("%d", &numero);
		} while(numero < 50 || numero > 80);

		if(numero > 50 && numero < 60){
			counter += 1;
			total += numero;
		}
		else if(numero == 71){
			counter71 += 1;
			switch(counter71){
				case 1: printf("Felicitaciones\n"); break;
				case 2: printf("Felicitaciones, ven manana a la Universidad Javeriana por un premio\n"); break;
				default: printf("Muy sospechoso -.-\n"); break;
			}
		}
		else{
			total += numero;
		}

		i++;

	}

	promedio = total / repeticiones;

	printf("El numero de veces que digitaste un número entre 50 y 60 fue: %d", counter);
	printf("El promedio de los numeros que digitaste fue de: %f", promedio);

}

/* Punto 3 */

int contarMercancia(){

	char tipo;
	int bultosPapas, typeB, kilosCebolla, countCebolla = 0, countC3 = 0, countC4 = 0, countTA = 0, 
		kilosMango, countMango = 0, kilosTomate, kilosNaranja, countNaranja = 0;

	do{
		printf("Tipo de camion que llego: ");
		scanf("%c", &tipo);

		if(tipo == 'A'){

			countTA += 1;
			printf("Bultos de papas: ");
			scanf("%d", &bultosPapas);
		}
		else if(tipo == 'B'){

			printf("Cantidad de productos: ");
			scanf("%d", &typeB);

			switch(typeB) {

				case 2: 

					printf("Kilos de tomate: ");
					scanf("%d", &kilosTomate);

					printf("Kilos de cebolla: ");
					scanf("%d", &kilosCebolla);
					countCebolla += kilosCebolla;

					break;

				case 3:

					countC3 += 1;

					printf("Kilos de tomate: ");
					scanf("%d", &kilosTomate);

					printf("Kilos de cebolla: ");
					scanf("%d", &kilosCebolla);
					countCebolla += kilosCebolla;

					printf("Kilos de naranja: ");
					scanf("%d", &kilosNaranja);
					countNaranja += kilosNaranja;

					break;

				case 4: 

					countC4 += 1;

					printf("Kilos de tomate: ");
					scanf("%d", &kilosTomate);

					printf("Kilos de cebolla: ");
					scanf("%d", &kilosCebolla);
					countCebolla += kilosCebolla;

					printf("Kilos de naranja: ");
					scanf("%d", &kilosNaranja);
					countNaranja += kilosNaranja;

					printf("Kilos de mago: ");
					scanf("%d", &kilosMango);
					countMango += kilosMango;

					break;

				default: break;
			}
		}
	}while (tipo == 'A' || tipo == 'B');

	printf("ESTADISTICAS TIENDA LA FARRA\n");
	printf("----------------------------\n");
	printf("La cantidad de camiones tipo A que llegaron a la tienda hoy fueron: %d\n", countTA);
	printf("La cantidad de camiones tipo B con 3 productos que llegaron hoy fueron: %d\n", countC3);
	printf("La cantidad de camiones tipo B con 4 productos que llegaron hoy fueron: %d\n", countC4);
	printf("La cantidad de kilos de CEBOLLA que llegaron hoy fueron: %d\n", countCebolla);
	printf("La cantidad de kilos de MANGO que llegaron hoy fueron: %d\n", countMango);
	printf("La cantidad de kilos de NARANJA que llegaron hoy fueron: %d\n", countNaranja);

}


/* Punto 4 */

int sumarCifras(int num){

	int suma = 0;

	while (num != 0) {
    	suma += num % 10;
   		num /= 10;
	}

	return suma;

}


void imprimirPrimos(){

	int max, repeticion, divisor, dividendo, primo, mod, temp, primo2, divisor2, mod2;

	do{
	printf("Digite el maximo valor del rango: ");
	scanf("%d", &max);
	} while (max < 1000);

	repeticion = 1;

	while(repeticion < 4){

	switch(repeticion){

		case 1: 	

			printf("Los numero primos hasta %d son: ", max);

			for(dividendo = 2; dividendo <= max; dividendo++){
				primo = 1;
				for(divisor = 1; divisor < dividendo; divisor++){
					mod = dividendo % divisor;
					if(mod == 0 && !(divisor == 1)){
						primo = 0;
						break;
					}
				}

			if(primo == 1){
				printf("%d ", dividendo);
			}
			}

			repeticion++;
			break;

		case 2:

			printf("\n");
			printf("\n");
			printf("Los numeros primos con 3 digitos son: ");

			for(dividendo = 1; dividendo <= max; dividendo++){
				primo = 1;
				for(divisor = 1; divisor < dividendo; divisor++){
					mod = dividendo % divisor;
					if(mod == 0 && !(divisor == 1)){
						primo = 0;
						break;
					}
				}

			if(primo == 1){
				if(dividendo > 99 && dividendo < 999){
				printf("%d ", dividendo);
				}
			}
			
			}

			repeticion++;
			break;		

		case 3:

			printf("\n");
			printf("\n");
			printf("Los numeros primos cuya suma de digitos dan otro primo son: ");

			for(dividendo = 2; dividendo <= max; dividendo++){
				primo = 1;
				for(divisor = 1; divisor < dividendo; divisor++){
					mod = dividendo % divisor;
					if(mod == 0 && !(divisor == 1)){
						primo = 0;
						break;
					}
				}

			if(primo == 1){
				primo2 = 1;
				temp = sumarCifras(dividendo);
				for(divisor2 = 2; divisor2 < temp; divisor2++){
					mod2 = temp % divisor2;
					if(mod2 == 0){
						primo2 = 0;
						break;
					}
				}

				if(primo2 == 1){
					printf("%d ", dividendo);
				} 
			}
			
			}

			repeticion++;
			break;	

		default: break;	
	}

	}

}
	

int main(){

	/* Nota: Profe, el menu del switch no sale de los procedimientos después de haber marcado la opción. Lo repetí
			 unas cuantas veces y lo realice sin el do while y aún así ocurre lo mismo. Cuando se ejecutan los procedimientos
			 por fuera de las estructuras de control, estos sí terminan.

			 Por favor explicarme qué ocurre. Gracias. */ 

	int option;

	printf("Digite 1 para ejecutar el punto 1, 2 para ejecutar el punto 2, 3 para ejecutar el punto 2 y 4 para ejecutar el punto 4: ");
	scanf("%d", &option);

	do{
		switch(option){

			case 1: producirAsteriscos(); break;
			case 2: jugarNumeros(); break;
			case 3: contarMercancia(); break;
			case 4: imprimirPrimos(); break;
			case 0: break;
			default: 
				printf("Digite 1 para ejecutar el punto 1, 2 para ejecutar el punto 2, 3 para ejecutar el punto 2 y 4 para ejecutar el punto 4: ");
				scanf("%d", &option);

		}
		printf("Digite 1 para ejecutar el punto 1, 2 para ejecutar el punto 2, 3 para ejecutar el punto 2 y 4 para ejecutar el punto 4: ");
		scanf("%d", &option);
	}while(option != 0);
	 
	return 0;
}