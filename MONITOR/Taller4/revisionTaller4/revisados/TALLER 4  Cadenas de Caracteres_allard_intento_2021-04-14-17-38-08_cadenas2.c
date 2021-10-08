#include <stdio.h>
#include <stdlib.h>


int main(){
   char Cadena[250] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio";
   char *p;
   printf("En este programa te vamos a presentar un parrafo con errores ortograficos, el objectivo sera ocrregir algunos de ellos, indicando una mayuscula al inicio de cada oracion. El parrafo a corregir es este: ");
   printf(" \n");
   puts(Cadena);

   p = Cadena; 
   *(p+0) = toupper(*(p+0));
   while (*p != '\0') {
      if (*p == ' '){
         *(p+1) = toupper(*(p+1));
      }    
      p++;
   }
   printf(" \n");
   printf(" \n");
   printf("Entonces la cadena modificada por el programa es: ");
   printf(" \n");
   puts(Cadena);





   return 0;

}