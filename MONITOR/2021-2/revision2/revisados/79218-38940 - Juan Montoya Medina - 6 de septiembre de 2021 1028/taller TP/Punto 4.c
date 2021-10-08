/*#include <stdio.h>
void main (){
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
	
}*/