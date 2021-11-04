// Nicolas Izquierdo Fuertes Taller#2
#include <stdio.h>

void funcionUno();
void funcionDos();
void funcionTres();
void funcionCuatro();
void imprimir(int n);
void main(){
	int opcion;
	do{
		printf( "1. Punto numero 1\n" );
		printf( "2. Punto numero 2\n" );
		printf( "3. Punto numero 3\n" );
		printf( "4. Punto numero 4\n" );	
		printf( "5. SALIR\n" );		

		printf ( "Digite la opcion deseada: \n" );
		scanf ( "%d", &opcion );
		switch( opcion ){

			case 1:
				funcionUno();
				break;
			case 2:
				funcionDos();
				break;
			case 3:
				funcionTres();
				break;
			case 4:
				funcionCuatro();
				break;
			case 5:
				break;
			default:
				printf( "Opcion errada \n" );
		}
	}
	while( opcion != 5 );

}

void funcionUno(){
	int n;
	int i;
	i = 1;
	n = 1;
	int x = n;
  		while(n > 0){
    	printf( "Digite el numero para la linea: " );
	  	scanf( "%d", &n );
	  	x = n;
    	if( i == 10 ){
      n = 0;
    	}
    	if( x < 15 &&  i <= 10 ){
      	imprimir( x );
      	imprimir( x );
      	i++; 
    	}
  	}
}
void imprimir(int n){
  	printf("%d ", n);
  	for( int j = 0; j < n; j++){
    	printf("* ");
  }
  printf("%d\n", n);
}

void funcionDos(){
	int n, sum, cont, cont71, cont5060, x;	
	cont71 = 1;
	sum = 0;
	cont = 0;
	cont5060 = 0;
	printf( "Cuantos numeros va a digitar: " );
	scanf( "%d", &n );
	for( int i = 0 ; i < n; i++){
		printf( "Digite el primer numero: " );
		scanf( "%d", &x );
		if(x >= 50 && x <= 80){
			if (x == 71){
				if(cont71 == 1){
					printf( "Felicitaciones\n" );
				}
				else if(cont71 == 2){
					printf( "Felicitaciones, venga maniana por un premio\n" );
				}	
				else if( cont71 >= 3){
					printf( "Esta muy sospechoso!!\n" );
				}
				cont71++;
			}
			else{
				if(x >= 50 && x <=60 ){
					cont5060++;
				}
				sum += x;
				cont++;	
			}	
		}
		else{
			printf( "Digitaste un numero invalido\n" );
			i--;
		}
	}
	printf( "Digito %d un numero entre 50 y 60.\n", cont5060 );
	printf( "El promedio es: %d\n", sum/cont );
}

void funcionTres(){
	int n; //Cantidad de camiones
	int bultos = 0;
	int conta = 0;
	int cont3y4 = 0;
	int contPapa = 0;
	int contCebollas = 0;
	int contMangos = 0;
	int contNaranja = 0;
	int contTomates = 0;
	int tipoB;
	printf( "Cuantos camiones van a llegar: " );
	scanf( "%d", &n);
	printf( "Cuantos camiones son de tipo A: " );
	scanf( "%d", &conta);
	for( int i = 0 ; i < conta; i++){
		printf( "Cuantos bultos trajo el %d tipo A: ", i+1 );
		scanf( "%d", &bultos);
		contPapa += bultos;
	}
	for( int j = 0; j < n - conta; j++){
		printf( "Cuantos productos trae el camion tipo B: ");
		scanf( "%d", &tipoB);
		switch( tipoB ){
			
			case 2:
				printf( "Cuantos quilos de tomates trae: ");
				scanf( "%d", &bultos);
				contTomates += bultos;
				printf( "Cuantos quilos de cebolla trae: ");
				scanf( "%d", &bultos);
				contCebollas += bultos;
				break;
			case 3:
				printf( "Cuantos quilos de tomates trae: ");
				scanf( "%d", &bultos);
				contTomates += bultos;
				printf( "Cuantos quilos de cebolla trae: ");
				scanf( "%d", &bultos);
				contCebollas += bultos;
				printf( "Cuantos quilos de naranja trae: ");
				scanf( "%d", &bultos);
				contNaranja += bultos;
				cont3y4++;
				break;	
			case 4:
				printf( "Cuantos quilos de tomates trae: ");
				scanf( "%d", &bultos);
				contTomates += bultos;
				printf( "Cuantos quilos de cebolla trae: ");
				scanf( "%d", &bultos);
				contCebollas += bultos;
				printf( "Cuantos quilos de naranja trae: ");
				scanf( "%d", &bultos);
				contNaranja += bultos;
				printf( "Cuantos quilos de mangos trae: ");
				scanf( "%d", &bultos);
				contMangos += bultos;
				cont3y4++;
				break;	
		}
	}
	printf( "Llegaron %d camiones tipo A a LA FARRA\n", conta);
	printf( "Llegaron %d camiones de 3 y 4 productos a LA FARRA\n", cont3y4);
	printf( "Llegaron %d quilos de cebolla a LA FARRA\n", contCebollas);
	printf( "Llegaron %d quilos de naranja a LA FARRA\n", contNaranja);
	printf( "Llegaron %d quilos de mango a LA FARRA\n", contMangos);
}


void funcionCuatro(){
	int n; //Cantidad de datos
	int contd = 0;
	printf( "Digite la cantidad de numeros: ");
	scanf ( "%d", &n );
	if (n >= 1000){
		int x = 0;
		while ( x < n){
			int cont = 0;
			for(int i = 1; i <= x + 1 ; i++){
				if ( (x + 1) % i == 0){
					cont ++;
				}
			}
			if(cont == 2){
				printf("%d\n", x + 1);
				if(x + 1 > 99 && x + 1 < 1000){
					contd++;
				}
			}
			x++;	
		}
	}
	
	else{
		printf("Digitaste un numero menor a 1000\n");
	}
	printf("La cantidad de numeros con tres digitos es: %d\n", contd);
	
	if (n >= 1000){
		int x = 0;
		while ( x < n){
			int cont = 0;
			for(int i = 1; i <= x + 1 ; i++){
				if ( (x + 1) % i == 0){
					cont ++;
				}
			}
			if(cont == 2){
				printf("%d\n", x + 1);
				if(x + 1 > 99 && x + 1 < 1000){
					contd++;
				}
			}
			x++;	
		}
	}
}
