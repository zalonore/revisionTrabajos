#include <stdio.h>
#include <stdlib.h>




int Tamano(char Cadena[]){
   int i=0,conteo=0;

   while( *(Cadena + i)!= '\0') {
      conteo++;       
      i++;
   }
   return conteo;
}

void copiaArreglos( char cadenaA[], char cadenaB[] ){
   int i=0,j=0;
   while( *(cadenaA + i)!= '\0') {
      if( ( *(cadenaA + i) == 'c' ) && ( *(cadenaA + (i+1)) == 'a' ) && ( *(cadenaA + (i+2)) == 'm' )){    
         i = i + 6;
      }
      
      else{
         *(cadenaB + j) = *(cadenaA + i);
         i++;
         j++;
      }
   }
   printf(" \n");
   printf(" \n");
   printf("La cadena modificada es: ");
   puts(cadenaB);


}


int main(){
   char Cadena[] = "Mi profe consiguio una camara vieja antes de la pandemia, pero como ahora es un profe digital, el profe se consiguio una camara nueva mas bonita. Pasado el tiempo se dio cuenta que la camara nueva aunque bonita era una camara mala, pero que bobada, al fin y al cabo, ya sea con una camara vieja o una camara nueva, nunca la muestra en clase";
   int tam;
   puts(Cadena);
   tam = Tamano(Cadena);
   char Reemplazo[tam];

   copiaArreglos(Cadena, Reemplazo);
   
   

   return 0;
}