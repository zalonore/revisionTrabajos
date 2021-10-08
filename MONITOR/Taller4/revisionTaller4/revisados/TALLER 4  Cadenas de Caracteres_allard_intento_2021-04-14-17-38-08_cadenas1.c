#include <stdio.h>
#include <stdlib.h>


int main(){
   char Oracion[40];
   char *p;
   int i, contador=0;
   printf("Ingrese aqui una palabra u oracion que se le venga en mente(el programa solo leera maximo 40 caracteres): ");
   fgets(Oracion, 39, stdin);
   puts(Oracion);
   
   p = Oracion; 
   while (*p != '\0') {
      if (*p != ' '){
         contador++;
      }    
      p++;
   }

   printf("La cantidad de caracteres que su programa escaneo es de: %d", contador-1);

   
   return 0;
}