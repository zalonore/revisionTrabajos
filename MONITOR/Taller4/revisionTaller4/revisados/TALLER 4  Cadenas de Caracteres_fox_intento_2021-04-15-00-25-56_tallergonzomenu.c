#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int contar(char *s){
	int i, x;	
	x = strlen(s);
 	return x;
}


int mayusc(char *garcia){
	int i;
	for(i=0; garcia[i]!='\0'; i++){
		if(i==0)
		{
			if((garcia[i]>='a' && garcia[i]<='z'))
				garcia[i]=garcia[i]-32;
			continue; 	
		}
		if(garcia[i]==' '){
			++i;
			if(garcia[i]=='g' && garcia[i+1]=='a'){
				garcia[i]=garcia[i]-32;
				continue;
			}
		}
	}
	printf(garcia);
 	return 0;	
}

int eliminar(char*camara){
	int i, n;
	for(i=0; camara[i]!='\0'; i++){
		if(camara[i]==' '){
			++i;
			if(camara[i]=='c' && camara[i+1]=='a'&& camara[i+2]=='m'){
				for (i, n = 0; n<6; i++, n++)
				camara[i]=' ';
				continue;
			}
		}
	}
	printf(camara);
	return 0;
}


void menu(){
   printf( "menu \n"
           "=================\n"
           "1. punto 1(contar)\n"
           "2. punto 2(mayuscula en la primera letra de la oracion, tambien en el nombre y en el apellido de gabriel)\n"
           "4. punto 4 (la camara del profesor)\n"
           "0. exit\n"
           "opc: " );
   return;
}


int main(){
	int opc;
	char s[1000], 
	garcia[1000] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio",
	camara[1000] = "Mi profe consiguio una camara vieja antes de la pandemia, pero como ahora es un profe digital, el profe se consiguio una camara nueva mas bonita. Pasado el tiempo se dio cuenta que la camara nueva aunque bonita era una camara mala, pero que bobada, al fin y al cabo, ya sea con una camara vieja o una camara nueva, nunca la muestra en clase.";
	menu();
	do{
	scanf( "%d", &opc );
	      switch( opc ){
	         case 1:
	         	system("cls");
	         	printf("ingrese la cadena:\n ");
				gets(s);
			    printf("hay %d caracteres en la cadena\n", contar(s));
	         	break;
	         case 2:	         	
	        	printf("resultado:\n",mayusc(garcia));
				break;
			 case 4:
			 	printf("resultado:\n",eliminar(camara));
				break;	 	
	      }
	} while( opc != 0 );
}
