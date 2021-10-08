#include <stdio.h>
#include <stdlib.h>


void conteoVocal(char letra){
   char Cadena[250] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio";
   char *p;
   p = Cadena;

   printf(" \n");
   printf("Ha elegido la opcion 1, con el vocal digitado, se contara en el parrafo siguiente(el que se mostrara en pantalla) la cantidad de veces que aparece esa letra digitada: ");
   printf(" \n");
   printf(" \n");
   puts(Cadena);
   int i,conteo;
   while (*p != '\0') {
      if (*p == letra){
         conteo++;
      }    
      p++;
   }
   printf(" \n");
   printf("La cantidad de veces que aparece la vocal %c es %d ", letra, conteo);

}


void cambioPrimerizo(char letra){
   char Cadena[250] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio";
   char *p;
   p = Cadena;
   
   printf(" \n");
   printf("Ha elegido la opcion 2, con el vocal digitado se reemplazara la primera letra identica encontrada en el parrafo por su mayuscula, el parrafo a modificar es el siguiente: ");
   printf(" \n");
   printf(" \n");
   puts(Cadena);

   int i, comprobante=0;
    while (*p != '\0') {
      if( (*p == letra) && (comprobante == 0) ){
         *(p+0) = toupper(*(p+0));
         comprobante++;
      }    
      p++;
   }
   printf(" \n");
   printf("El parrafo resultante luego de la modificacion es : ");
   printf(" \n");
   puts(Cadena);

}

void intercaladoMayuscula(char letra){
   char Cadena[250] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio";
   char *p;
   p = Cadena;

   printf(" \n");
   printf("Ha elegido la opcion 3, con el vocal digitado se intercalara entre mayusculas y minusculas cada vez que se encuentre dicha letra en el parrafo predeterminado, dicho parrafo es: ");
   printf(" \n");
   printf(" \n"); 
   puts(Cadena);

   int i, comprobante=1;
   while (*p != '\0') {
      if (*p == letra){
         if (comprobante % 2 != 0){
            *(p+0) = toupper(*(p+0));
            comprobante++;
         }
         else{
            comprobante++;
         }
      }    
      p++;
   }
   printf(" \n");
   printf("El parrafo resultante luego de la modificacion es : ");
   printf(" \n");
   puts(Cadena);
}


int main(){
   char letra;
   int opcion;
   printf("Bienvenido, el objectivo de este programa es que el usuario digite una vocal, letra de su eleccion y a travez de esto se modificara un determinado parrafo... ");
   printf(" \n");
   printf("Digite la letra que protagonizara esta modificacion: ");
   scanf( "%c", &letra);
   printf(" \n");
   printf(" \n");
   printf("Ahora, le presentamos las opciones que puede elegir para modificacion del parrafo teniendo en cuenta su vocal ");
   printf(" \n");
   printf("(1)- Contar cuantas veces el vocal digitado aparece en el parrafo predeterminado");
   printf(" \n");
   printf("(2)- Cambiar a mayuscula la primera letra identica a la vocal seleccionada que se encuentra en el parrafo");
   printf(" \n");
   printf("(3)- Intercadado de cambio a masyucula por cada vez que se encuentre la vocal en el parrafo");
   printf(" \n");
   printf(" \n");
   printf("Digite el numero que representa la opcion buscada(el programa solo lee las opciones mostradas en pantalla): ");
   scanf( "%d", &opcion);

   switch(opcion){
      case 1:
         conteoVocal(letra);
         break;

      case 2:
         cambioPrimerizo(letra);
         break;

      case 3:
         intercaladoMayuscula(letra);
         break;
   
      default:
         printf("No se ha detectado la opcion ingresada, reinicie el programa e intentelo nuevamente");
   }

   return 0;
}