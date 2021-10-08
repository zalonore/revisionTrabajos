#include <stdio.h>
void punto1();
void punto2();
void punto3();
void punto4();
void main(){
	int opcion;
	printf("Escoja la opcion del menu\n");
	printf("1. Punto1\n");
	printf("2. Punto2\n");
	printf("3. Punto3\n");
	printf("4. Punto4\n");
	printf("0. Salir\n");
	scanf("%d",&opcion);
	do {
		switch (opcion){
			case 1 :
				punto1();
				break;
			case 2 :
				punto2();
				break;
			case 3 :
				punto3();
				break;
			case 4 :
				punto4();
				break;
			case 0 :
				break;
			default:
				printf("Digistaste un valor incorrecto\n");
				break;
		}
	}while(opcion!=0);
	
}
void punto1(){
	int linea,y;
	linea = 1;
	int x = 0;
	
	while(linea>0&& x<11){
		printf("Digite el numero para la linea: ");
		scanf("%d",&linea);
		if (linea<=15 ){
				if (linea > 0){
			printf("%d ",linea);
		}
		
		for (int i = 0;i<linea;i++){
			printf("* ");
		}
		if  (linea > 0){
			printf("%d\n",linea);
			x++;
		}
			
		}
		else {
			y = 1;
		}
	
	}

}
void punto2(){
	int nnum;
	float promedio,num;
	float suma = 0;
	int y = 0;
	int x = 0;
	float z = 0;
	
	
	printf("Cuantos numeros desea digitar en el juego?\n");
	scanf("%d",&nnum);
	for (int i =0;i<nnum;i++){
		printf("Digite el numero: ");
		scanf("%f",&num);
		if (num != 71){
			suma = suma+num;
			z++;
			
			
		}
		if (num > 49 && num<81){
			if(num == 71&& x == 0){
				printf("Bien hecho!\n");
			}
			if(num == 71&& x==1){
				printf("Bien hecho!, ven manana por un premio\n");
			}
			if(num == 71&& x>1){
				printf("Esta muy sospechoso!\n");
			}
			if (num>49 && num<61){
				y++;		
			}
			x++;
		}
		else{
			printf("Este numero se encuentra mal digitado\n");
		}
	}
	printf("La cantidad de veces que se digitaron numeros entre 50 y 60 fueron: %d\n",y);
	promedio = suma/z;
	printf("El promedio de los datos es: %f\n",promedio);                        
}
void punto3 (){
	int ncamion,tipocamion,nbultos,nproductos,kilost,kilosc,kilosn,kilosm;
	int conta = 0;
	int cont3 = 0;
	int cont4 = 0;
	int kilosct = 0;
	int kilosnt = 0;
	int kilosmt = 0;
	printf("Cuantos camiones llegaron?\n");
	scanf("%d", &ncamion);
	for (int i=1;i<=ncamion;i++){
		printf("De que tipo es el %d camion(1 para A y 2 para B)\n",i);
		scanf("%d",&tipocamion);
		if(tipocamion==1){
			printf("Cuantos bultos de papa tiene: ");
			scanf("%d",&nbultos);
			conta ++;
		}
		if(tipocamion==2){
			printf("Cuantos productos trae?\n");
			scanf("%d",&nproductos);
			if(nproductos==2){
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&kilost);
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&kilosc);
				kilosct = kilosct + kilosc;
			}
			if(nproductos==3){
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&kilost);
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&kilosc);
				kilosct = kilosct + kilosc;
				printf("Cuantos kilos de naranja trae: ");
				scanf("%d",&kilosn);
				kilosnt = kilosnt + kilosn;
				cont3 ++;
			}
			if(nproductos==4){
				printf("Cuantos kilos de tomate trae: ");
				scanf("%d",&kilost);
				printf("Cuantos kilos de cebolla trae: ");
				scanf("%d",&kilosc);
				kilosct = kilosct + kilosc;
				printf("Cuantos kilos de naranja trae: ");
				scanf("%d",&kilosn);
				kilosnt = kilosnt + kilosn;
				printf("Cuantos kilos de mango trae: ");
				scanf("%d",&kilosm);
				kilosmt = kilosmt + kilosm;
				cont4 ++;
				
			}
		}
	}
	printf("La cantidad de camiones de tipo A es: %d\n",conta);
	printf("La cantidad de camiones con 3 productos que llegaron fue: %d\n",cont3);
	printf("La cantidad de camiones con 4 productos que llegaron fue: %d\n",cont4);
	printf("La cantidad de kilos de cebolla que llegaron fueron %d\n",kilosct);
	printf("La cantidad de kilos de naranja que llegaron fueron: %d\n",kilosnt);
	printf("La cantidad de kilos de mango que llegaron fueron: %d\n",kilosmt);
	
}
void punto4 (){
	int nnum,cont;
	int cont3 = 0;
	printf("Digite una cantidad de numeros: \n");
	scanf("%d",&nnum);
	if(nnum>1000){
		for(int i = 1; i < nnum;i++){
			cont = 0;
			for(int x = 1; x <= i; x++){
				if (i % x==0){
					cont++;
				}
			}
			if (cont==2){
				printf("%d\n",i);
				if (i>99&&i<1000){
					cont3++;
				}
				
			}
		}
		printf("Existen %d numeros con 3 digitos\n",cont3);
	}
	else{
		printf("Digitaste un numero menor que mil\n");
	}
	
}