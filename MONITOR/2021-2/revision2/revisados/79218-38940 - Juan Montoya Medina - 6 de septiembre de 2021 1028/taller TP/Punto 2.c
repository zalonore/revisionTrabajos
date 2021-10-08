/*#include <stdio.h>
void main(){
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
}*/
                                                 
	
	
                                      