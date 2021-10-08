#include <stdio.h>

int punto1(){
	int numero = 0, contador = 0;
	do{
		printf("Digite el numero para la linea: ");
		scanf("%d", &numero);
		if(numero > 15 || numero <= 0){

		}else{
			printf("\n%d ", numero);
			for(int i = 0; i < numero; i++){
				printf("* ");
			}
			printf("%d\n", numero);
			contador++;
		}
		printf("\n");
	}while(numero > 0 && contador < 10);
}

int punto2(){
	int numeroEvaluar = 0, cantidadNumeros = 0, numerosEntre2 = 0, cantidad = 0, cantidadGeneral = 0;
	float promedio = 0;
	printf("Por favor digite la cantidad de numeros a digitar: ");
	scanf("%d", &cantidadNumeros);
	for(int i = 0; i < cantidadNumeros; i++){
		printf("Por favor digite un valor: ");
		scanf("%d", &numeroEvaluar);
		if(numeroEvaluar < 50 || numeroEvaluar > 80){
			printf("\nValor mal digitado.");
		}else{
			if(numeroEvaluar == 71){
				cantidad++;
				if(cantidad == 1){
					printf("Felicitaciones por su acierto.\n");
				}else if(cantidad == 2){
					printf("Felicitaciones por su acierto, por favor vuelva maniana por un premio.\n");
				}else if(cantidad == 3){
					printf("Esta muy sospechoso!!\n");
				}
			}else{
				if(numeroEvaluar >= 50 && numeroEvaluar <=60){
					numerosEntre2++;
				}
				promedio+= numeroEvaluar;
				cantidadGeneral++;
			}
		}
	}
	printf("\nCantidad de valores entre 50-60: %d\n", numerosEntre2);
	printf("Promedio de valores (sin contar el 71); %f\n", promedio/cantidadGeneral);
}

int punto3(){
	int camionesA = 0, camionesB = 0, dosProductos = 0, kilosFrutas = 0, kilos = 0, cantidadProductos = 0;
	printf("\n--------------La farra nashe--------------\n");
	printf("Por favor digite cuantos camiones A llegaron a la farra: ");
	scanf("%d", &camionesA);
	printf("Por favor digite cuantos camiones B llegaron a la farra: ");
	scanf("%d", &camionesB);

	for(int i = 1; i < camionesB+1; i++){
		do{
			printf("Por favor digite la cantidad de productos del camion %d: ", i);
			scanf("%d", &cantidadProductos);
		}while(cantidadProductos < 2 || cantidadProductos > 4);
		if(cantidadProductos == 3 || cantidadProductos ==4){
			dosProductos++;
		}
		switch(cantidadProductos){
			case 2:
			printf("Por favor digite la cantidad de tomate: ");
			scanf("%d", &kilos);
			printf("Por favor digite la cantidad de cebolla: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;
			break;
			case 3:
			printf("Por favor digite la cantidad de tomate: ");
			scanf("%d", &kilos);
			printf("Por favor digite la cantidad de cebolla: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;	
			printf("Por favor digite la cantidad de naranja: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;
			break;
			case 4:
			printf("Por favor digite la cantidad de cebolla: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;
			printf("Por favor digite la cantidad de naranja: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;
			printf("Por favor digite la cantidad de mango: ");
			scanf("%d", &kilos);
			kilosFrutas+=kilos;
			printf("Por favor digite la cantidad de tomate: ");
			scanf("%d", &kilos);
			break;
		}
	}
	printf("\nCantidad de camiones tipo A: %d", camionesA);
	printf("\nCantidad de camiones con productos 3 y 4: %d", dosProductos);
	printf("\nCantidad de kilos de cebolla, naranja y mango: %d", kilosFrutas);
}

int punto4(){
	int valor = 0, cont = 0, tresCifras = 0;
	printf("\n--------------Numeros primos--------------");
	printf("\nDigite un numero no menor a 1000: ");
	scanf("%d", &valor);
	if(valor < 1000){
		printf("\nValor menor a 1000");
	}else{
		for(int i = 2; i < 100; i++){
			cont = 0;
			for(int m = 1; m < i+1; m++){
				if(i % m == 0){
					cont++;
				}
			}
			if(cont == 2){
				printf("%d ", i);
			}
		}
		printf("\n\nPrimos de tres cifras:\n");
		for(int i = 100; i < valor; i++){
			cont = 0;
			for(int m = 1; m < i+1; m++){
				if(i % m == 0){
					cont++;
				}
			}
			if(cont == 2){
				tresCifras++;
				printf("%d ", i);
			}
		}
		printf("\nCantidad de primos de 3 cifras: %d", tresCifras);
		printf("\n\nValores que al sumar sus digitos dan un primo:\n");
		int aux = 0, nuevoValor = 0;
		for(int i = 11; i < valor; i++){
			cont = 0;
			aux = i;
			nuevoValor = 0;
			for(int m = 1; m < i+1; m++){
				if(i % m == 0){
					while(i > 0){
						nuevoValor+= i % 10;
						i = i / 10;
					}
				}
				if(nuevoValor % m == 0){
					cont++;
				}
				i = aux;
			}
			if(cont == 2){
				printf("%d ", i);
			}
		}
	}
}

int main(){
	int opcion = 0;
	do{
		printf("\nPor favor seleccione la opcion que desea utilizar\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				punto1();
			break;
			case 2:
				punto2();
			break;
			case 3:
				punto3();
			break;
			case 4:
				punto4();
			break;
			case 5:
				printf("Programa finalizado.\n");
			break;
		default:
			printf("Opcion no existente\n");
		}
	}while(opcion != 5);
	return 0;	
}