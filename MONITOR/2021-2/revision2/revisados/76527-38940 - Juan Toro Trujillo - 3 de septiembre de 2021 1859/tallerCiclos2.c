#include<stdio.h>
#include<string.h>

int operacionAsterisco(int x){
	int contador;
	int lineas = 0;	
	while(lineas < 2){	
		printf("%d ", x);
		for(contador = 0; contador < x; contador++){
			printf("*");
		}
		printf(" %d\n", x);
		lineas++;
	}
}

int punto2(int x){
	int numD, var2;
	int i = 0, cont=0, cont71=0;
	float contPro=0, divPro = 0;
	while(i < x){
		printf("digite un numero : ");
		scanf("%d",&numD);
		if (numD < 50 || numD > 80){
			printf("numero no valido, digite un numero entre 50 y 80\n");
		}
		else{
			contPro+=numD;
			divPro++;
			if(numD == 71){
				contPro-=numD;
				divPro--;
				if(cont71 == 0){
					printf("!!Felicitaciones!!\n");
					cont71++;
				}
				else if(cont71 == 1){
					printf("!!Felicitaciones!!, vuelva mañana por un premio\n");
					cont71++;
				}
				else if(cont71 >= 2){
					printf("!!esta muy sospechoso!!\n");
				}
			}
			else if(numD > 49 && numD < 61){
				cont++;
			}
				i++;
		}

	}
	printf("usted digito un numero entre 50 y 60: %d veces\n", cont);
	printf("promedio sin incluir 71 : %f\n", contPro/divPro);
}
int punto3(int cantC){
	// valores punto 3
	char camion[100];
	int contarCamionA=0,proB,r3,cont3,null=1;
	int n = 1,cebolla1, naranja1, mango1, tomate1;
	int cebolla2=0, naranja2=0, mango2=0, tomate2=0;
	int countC3=0,countC4=0;
	for (cont3 = 0; cont3 < cantC; cont3++){
				printf("que tipo de camion era el numero %d\n", n++);
				scanf("%s",&camion[cont3]);
				if (strcmp(&camion[cont3], "A") == 0){
					contarCamionA++;
				}
			
				if (strcmp (&camion[cont3], "B") == 0){
					printf("cuantos productos trae?\n");
					while (null !=0){
						scanf("%d",&proB);
						if (proB== 2){
							printf("cuantos kilos de tomate trae ?\n");
							scanf("%d",&tomate1);
							tomate2 += tomate1;
							printf("cuantos kilos de cebolla trae ?\n");
							scanf("%d",&cebolla1);
							cebolla2 += cebolla1;
							null*=0;
						}
						if (proB==3){	
							countC3++;
							printf("cuantos kilos de tomate trae ?\n");
							scanf("%d",&tomate1);
							tomate2 += tomate1;
							printf("cuantos kilos de cebolla trae ?\n");
							scanf("%d",&cebolla1);
							cebolla2 += cebolla1;
							printf("cuantos kilos de naranja trae ?\n");
							scanf("%d",&naranja1);
							naranja2 += naranja1;
							null*=0;
						}
						if(proB==4){
							countC4++;
							printf("cuantos kilos de tomate trae ?\n");
							scanf("%d",&tomate1);
							tomate2 += tomate1;
							printf("cuantos kilos de cebolla trae ?\n");
							scanf("%d",&cebolla1);
							cebolla2 += cebolla1;
							printf("cuantos kilos de naranja trae ?\n");
							scanf("%d",&naranja1);
							naranja2 += naranja1;
							printf("cuantos kilos de mango trae ?\n");
							scanf("%d",&mango1);
							mango2 += mango1;
							null*=0;
						}
					}
				}
			null++;
			}

			printf("a La Farra llegaron :\n");
			printf("%d camiones de tipo A\n", contarCamionA);
			printf("%d camiones de tipo B con 3 productos\n", countC3);
			printf("%d camiones de tipo B con 4 productos\n", countC4);
			printf("%d kilos de cebolla\n", cebolla2);
			printf("%d kilos de naranja\n", naranja2);
			printf("%d kilos de mango\n", mango2);
			printf("%d kilos de tomate\n", tomate2);
}

int punto4(int num){
	int orden1=0, orden2=0, contPrimosP= 0;
	int var4, cont4= 2, primo, cont3Di=0, x[1000], y[1000];
	while(cont4 < num){
		if(num < 1000){
			printf("ingrse un numero de mas de 3 digitos\n");
			scanf("%d",&num);
		}
		else{
			primo = 1;

			for(var4 = 2; var4 < cont4; ++var4){
				if(cont4 % var4 == 0){
					primo = 0;
					cont4++;
				}
			}
			if(primo && cont4 > 99 && cont4 < 1000){
				x[orden1++]= cont4++;
				cont3Di++;
			}
			if(primo && cont4 % 3 == 2){
				y[orden2++] = cont4++;
				contPrimosP++;
			}
			else if(primo){
				cont4++;
			}
		}	
	}
	printf("\n");
	printf("los numeros primos que tienen 3 digitos son :\n");
	for (int i = 0; i < orden1; i++){
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("\n");
	printf("hay %d numeros primos con 3 digitos\n",cont3Di);
	printf("\n");
	printf("los numeros primos que al sumar sus digitos dan un numero primo son :\n");
	for (int n = 0; n < contPrimosP; n++){
		printf("%d ", y[n]);
	}
	printf("\n");	
}

int main(){
int punto; 
	do{
		//valores punto 1
		int var1;
		int punto1;
		int cont1 = 0 ;
		//valores punto 2
		int var2, r2;
		// valores punto 3
		int cantC,r3;
		// valores punto 4
		int num,r4;
		printf("ingresar que punto ver del taller : ");
		scanf("%d", &punto);
		switch(punto){
			case 1:
				while(cont1 < 10 ){
					printf("Digite el numero para la linea: ");
					scanf("%d",&var1);
					if(var1 <= 0 ){
						cont1 += 11;
					}
					else if(var1 > 15){
						continue;
					}
					else{
						punto1=operacionAsterisco(var1);
						cont1++;
					}	
				}
				break;
			case 2:
				printf("ingrese cuantos numeros va a digitar : ");
				scanf("%d",&var2);
				r2= punto2(var2);
				break;
			case 3:
				printf("cuantos camiones llegaron ?\n");
				scanf("%d",&cantC);
				r3=punto3(cantC);
				break;
			case 4:
				printf("digite el limite maximo de numeros primos : ");
				scanf("%d",&num);
				r4= punto4(num);
				break;
			default:
				printf("no existe tal punto en el taller\n");
		}


	
	}
	while(punto !=0);
  
  	return 0;

}
