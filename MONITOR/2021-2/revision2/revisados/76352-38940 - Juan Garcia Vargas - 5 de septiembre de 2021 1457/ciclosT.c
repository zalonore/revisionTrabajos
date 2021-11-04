// Juan Francesco García Vargas (Ingeníeria de sistemas y computación)
// Taller 2 Tecnicas y practicas de programación (Ciclos)

#include<stdio.h>
#include<math.h>


// Operación para generar digitar un número y generar esa cantidad en asteriscos...  

int lineaAsteriscos(int numeroA){

	int i, cont = 0, val = 0;

	if(numeroA != 0 && numeroA > 0){
			printf(" %d ",numeroA);
		for(i = 0; i < numeroA; i++){
			printf(" * ");	// Imprimir número de asteriscos...
			val++;	
		}
		printf("\n");  // salto de linea...
		for(i = 0; i < numeroA; i++){
			printf(" * ");	 // Imprimir número de asteriscos...
			val++;	
		}
	}
	else{
		printf("No ingreso un numero valido\n");  // ingreso cero o un numero negativo 
	}
	if(val>0){
		printf(" %d\n",numeroA);  
	}
	return val;
}


int juegoNumeros(int numeroB){

	int cont = 0,numeritos,j=0,prom=0;
	float resultado = 0.0,kun = 0;
	for(cont = 0;cont<numeroB;cont++){
		printf("Digite el numero : ");
		scanf("%d",&numeritos);
		if (50 < numeritos && numeritos < 80){
			if (numeritos == 71){
				j++;  // contador de veces que digita el número 71
			}
		
			else{
				prom += numeritos;
				kun++; // contador de veces que digita numeros diferentes del 71
			}
		
			if(j == 1){
				printf("Felicitaciones!!! yoy`re good :D\n");
			}

			if(j == 2){
				printf("Felicitaciones!!!, puede venir mañana a las oficionas de Frank Industries por un premio :D\n");
			}
		
			if(j == 3){
				printf("Esto esta sospechoso!!!\n");
			}					
		}
		
		else{
			printf("Esta digitando numeros incorrectos\n");	// digita numeros por fuera del rango seleccionado	
		}
		
	}
	resultado = (float)prom / kun; // el promedio solicitado 
	printf("El total de veces que digito numeros fue de %d\n",(int)kun);
	printf("El promedio de todos los datos digitados 'sin contar el 71' es de: %f\n",resultado);	
	return resultado;

}

// Función para imprimir numeros desde 1 hasta n primos...

int numerosPrimos(int n){

	for(int i = 2;i <= n; i++){
		int cont = 0;
		for(int j = 2;j<=i/2;j++){
			if(i%j==0){
				cont++;  
				break;
			}
		}
		if(cont<1){
			printf("%d ",i);
		}

	}
	printf("\n");
}



int tiendaFarra(int val){
	int camionesA = 0,camionesB2 = 0,camionesB3 = 0,camionesB4 = 0,kilosCebolla = 0,kilosNaranja = 0, kilosMango = 0,kilosPapa = 0,kilosTomate,veri;
	printf("Bienvenido a la tienda 'La Farra'\n");
	printf("usted debera digitar en este programa la informacion respecto a la llegada de camiones\n");	
	printf("-------------------------------------------------------------------------------------------\n");
	printf("cuantos camiones de papa llegaron a la tienda 'La Farra' : ");
	scanf("%d",&camionesA);
	printf("-------------------------------------------------------------------------------------------\n");	
	printf("cuantos camiones de dos (2) alimentos llegaron a la tienda 'La Farra' : ");
	scanf("%d",&camionesB2);
	printf(" ********************** : \n");
	printf(" ********************** : \n");
	printf("cuantos camiones de tres (3) alimentos llegaron a la tienda 'La Farra' : ");
	scanf("%d",&camionesB3);
	printf(" ********************** : \n");
	printf(" ********************** : \n");
	printf("cuantos camiones de cuatro (4) alimentos llegaron a la tienda 'La Farra' : ");
	scanf("%d",&camionesB4);
	printf("-------------------------------------------------------------------------------------------\n");	
	printf("Ahora ingrese la informacion respecto a la cantidad de alimentos : \n");
	printf(" ********************** : \n");
	printf("Cuantos kilos de papa llegaron ? : ");			
	printf(" ********************** : \n");
	scanf("%d",&kilosPapa);
	printf(" ********************** : \n");
	printf("Cuantos kilos de mango llegaron ? : ");		
	scanf("%d",&kilosMango);
	printf(" ********************** : \n");
	printf("Cuantos kilos de cebolla llegaron ? : ");		
	scanf("%d",&kilosCebolla);
	printf(" ********************** : \n");
	printf("Cuantos kilos de naranja llegaron ? : ");		
	scanf("%d",&kilosNaranja);
	printf(" ********************** : \n");
	printf("Cuantos kilos de tomate llegaron ? : ");		
	scanf("%d",&kilosTomate);	
	printf("-------------------------------------------------------------------------------------------\n");
	printf("*Estadisticas Solicitadas*\n");
	printf(" ********************** : \n");
	printf("Desea saber las estadisticas solicitadas ? 'para si presione uno(1), para no presione cero(0)' : ");
	scanf("%d",&veri);
	if(veri == 1){		
		printf("La cantidad de caminiones de papa que llegaron fue de : %d ", camionesA);
		printf("La cantidad de caminiones de tres alimentos que llegaron fue de : %d ", camionesB3);
		printf("La cantidad de caminiones de cuatro alimentos que llegaron fue de : %d ", camionesB4);	
		printf(" ********************** : \n");
		printf("La cantidad de kilos de cebolla que llego fue de : %d ", kilosCebolla);
		printf("La cantidad de kilos de naranja que llego fue de : %d ", kilosNaranja);
		printf("La cantidad de kilos de mango que llego fue de : %d ", kilosMango);
	}
	if(veri == 0){
		printf("*no muestra resultados*");
	}
}



int main(){

	int definir;
	printf("Bienvenidos a este programa!!!\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("Usten tendra la posibilidad de ejcutar varios programas, a continuacion se le especifica que hacer para ejecutar cada uno\n");	
	printf("Para ejecutar el programa que imprime asteristos seleccione el numero 1\n");
	printf("Para ejecutar el juego 'con posible premio', seleccione el numero 2\n");
	printf("Para ejecutar el programa de almacenamiento de la tienda 'La Farra' seleccione el numero 3\n");
	printf("Para ejecutar el programa de numeros primos seleccione el numero 4\n");
	printf("Para salir del programa seleccione el numero 0\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("Ahora seleccione la opcion que desee y el programa se ejecutara\n");
	scanf("%d",&definir);

	do{

		if(definir == 1){

			int i,moon,cont = 0;
			//printf("Muestre en numero: ");
			while(cont < 10){
				printf("Muestre en numero: ");
				scanf("%d",&i);
				moon = lineaAsteriscos(i);
				if (moon <= 0){
					break;
				} 
			cont++;
			}
		}
		
		if(definir == 2){
	
			int j,moon2;
			printf("Cual es la cantidad de numeros que usted va a digitar?: ");	
			scanf("%d",&j);
			moon2 = juegoNumeros(j);

		}
	
		if(definir == 4){

			int n,moon4;
			printf("Seleccione el numero: ");
			scanf("%d",&n);
			moon4 = numerosPrimos(n);	
		
		}

		if(definir == 3){
			int g,moon3;
			printf("desea ejecutar el programa de almacenamiento de 'La Farra' ? : para si presione 1, para no presione 0 ");
			scanf("%d",&g);
			if(g == 1){
				moon3 = tiendaFarra(g);
			}
			if(g == 0){
				printf("no solicito la ejecucion del programa");
			}
		}
		
		definir = 10;
		printf("Ahora seleccione la opcion que desee y el programa se ejecutara\n");		
		scanf("%d",&definir);

	}while(definir != 0);
		

		return 0;	
}

