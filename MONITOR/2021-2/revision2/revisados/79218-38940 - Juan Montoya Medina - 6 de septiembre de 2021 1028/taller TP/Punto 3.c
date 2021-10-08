/*#include <stdio.h>
void main (){
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
	
}*/