#include <stdio.h>
#inlude <conio.h> 
int ponerAsteriscos(){
	int n; 

	printf("\n Digite el numero de asteriscos que desea imprimir: ");
	scanf("%i",&n);
	printf("\n");
	printf("%d",n);

	for (int i = 1; i <= n; i++){
		printf("*");
	}

	printf("%d",n);
	return 0;


}

void juego5080(){
	int num; veces; digitos;

	printf("\n Cuantos veces desea digitar numeros: ");
	scanf("%i", &num);

	for(int i = 1; i <= num; i++){
		scanf("%i", &digitos);
		if (digitos == 71){
			veces++;

			if (veces == 1){
			 printf( "Felicidades" );
			}
		
			else if (veces == 2){
				printf( "Felicidades, ven manana por un premio" );
			}

			else if (veces == 3){
			 printf( "Esta muy sospechoso" );
			}
		}
	}
	while(digitos >= 50 && digitos <= 60);{
		printf( "%i", digitos );
		digitos++;

		printf( "%i", digitos) ;
		printf( "numeros digito, entre 50 y 60. \n" );
	}
	
}
int laFarra(){
	char tipo;
	int productos, kilosDeCebolla, kilosDeNaranja, kilosDeMango;
	
	printf( "Cuando llegan los camiones tipo A es fácil de contabilizar la mercancía,\n pues se sabe que son camiones de papa y es suficiente con solo preguntarle al conductor\n del camión cuántos bultos de papa trajo en la carga. Cuando llegan camiones tipo B, se sabe que traen 2, 3 o 4 productos diferentes:" );
	printf( "\nLos de 3 traen tomate cebolla y naranja" );
	printf ("\nLos de 4 traen cebolla, naranja, mango y tomate" );
	printf( "\nLlego un camion con mercancia, digite el tipo de camion (a/b)");
	scanf( "%c", tipo )
	
	if (tipo == b ){
		printf( "¿Cuantos productos trae?" );
		scanf( "%d", productos );
		if ( productos == 2 ){
			printf( "\nTomate y Cebolla" );
			productos[2] = {tomate,cebolla};
		}
		elif ( productos == 3 ){
			printf( "\nTomate, Cebolla y Naranja" );
			productos[3] = {tomate,cebolla,naranja};
		}
		elif ( productos == 4){
			printf( "\nCebolla, Naranja,  Mango y Tomate" );
			productos[4] = {tomate,cebolla,naranja, mango};	
		else{
			printf("opcion incorrecta");
		}		
		}
	elif (tipo == a){
		
	}
	printf( "\n¿Cuantos kilos de cebolla lleva?: ");
	scanf( "\n%d", KilosDeCebolla);
	printf( "¿Cuantos kilos de naranja lleva?: ");
	scanf( "\n%d", KilosDeNaranja);
	printf( "¿Cuantos  kilos de mango lleva?: ");
	scanf( "\n%d", KilosDeMango);
	
	printf("Llegaro X cantidad de camiones a LaFarra, Llego X camiones  de 3 y 4 productos%d\n",)
		
		
		
	}

}

int numerosPrimos(){
	int i, num, cont;
	printf( "Digite un numero: "); scanf( "%i", &num);
	
	for(i=1; i<num; ++){
		if ( num "%i" == 0){
			cont++;
			
		}
	}
	if(count > 2){
		printf( "\nEl numero es compuesto");
		
	}
	else{
		printf( "\n El numero es primo" );
		return 0;
	}
}

void menu(){
	int opcion;
	do{
		printf("\n Bienvenido al Taller 2: \n \n");
		printf("1. Poner asteriscos \n");
		printf("2. Juego \n");
		printf("3. La Farra \n");
		printf("4. Numeros primos \n");
		printf("5. Salir \n");

		printf("\nDigite el punto del taller que desea ejecutar: \n");
		scanf("%d", &opcion);
		switch(opcion){

			case 1:
				ponerAsteriscos(); break;
			case 2: 
				juego5080(); break;
			case 3:
				laFarra(); break;
			case 4: 
				numerosPrimos(); break;
			default:
				printf("Â¡OpciÃ³n incorrecta! Solo puedes elegir entre los puntos [1-4] \n");

		}
	}while(opcion != 5);
}

int main(int argc, char const *argv[])
{
	menu();
	/*ponerAsteriscos();
	juego5080();
	laFarra();
	numerosPrimos();
*/
	return 0;
}
