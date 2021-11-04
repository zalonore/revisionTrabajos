//
// Created by German Caycedo on 13/04/21.
//

#include <stdio.h>

void punto1(){
    char cad[100];
    printf("Digite la cadena de caracteres: ");
    scanf("%s", cad);
    int n=0;
    while(cad[n] != '\0'){
        n++;
    }
    printf("\nla cadena tiene %d caracteres", n);
}

void punto2(){
    char card[300] = {'e','n',' ','u','n',' ','c','o','m','i','e','n','z','o',',',' ','g','a','b','r','i','e','l',' ','g','a','r','c','i','a',' ','M','a','r','q','u','e','z',' ','p','e','n','s','o',
                 ' ','e','n',' ','t','i','t','u','l','a','r',' ','s','u',' ','n','o','v','e','l','a',' ','L','a',' ','C','a','s','a',',',' ','p','e','r','o',' ','s','e',' ','d','e','c','i','d','i',
                 'o',' ','p','o','r',' ','C','i','e','n',' ','a','n','i','o','s',' ','d','e',' ','s','o','l','e','d','a','d',' ','p','a','r','a',' ','e','v','i','t','a','r',' ','c','o','n','f','u','s',
                 'i','o','n','e','s',' ','c','o','n',' ','l','a',' ','n','o','v','e','l','a',' ','L','a',' ','C','a','s','a',' ','G','r','a','n','d','e',',',' ','p','u','b','l','i','c','a','d','a',
                 ' ','e','n',' ','1','9','5','4',' ','p','o','r',' ','s','u',' ','a','m','i','g','o',',',' ','A','l','v','a','r','o',' ','C','e','p','e','d','a',' ','S','a','m','u','d','i','o','\0'};
    int n = 0;
    while (card[n] != '\0'){
        if (n == 0){
            card[n] = card[n] - 'a' + 'A';
        }
        if(card[n] == 'g' && card[n+1] == 'a' && card[n+2] == 'b' && card[n+3] == 'r' && card[n+4] == 'i'){
            card[n] = card[n] - 'a' + 'A';
        }
        if(card[n] == 'g' && card[n+1] == 'a' && card[n+2] == 'r' && card[n+3] == 'c' && card[n+4] == 'i'){
            card[n] = card[n] - 'a' + 'A';
        }
        n++;
    }
    n = 0;
    while (card[n] != '\0'){
        printf("%c", card[n]);
        n++;
    }
}

void punto3(){
    char card[300] = {'E','n',' ','u','n',' ','c','o','m','i','e','n','z','o',',',' ','G','a','b','r','i','e','l',' ','G','a','r','c','i','a',' ','M','a','r','q','u','e','z',' ','p','e','n','s','o',
                      ' ','e','n',' ','t','i','t','u','l','a','r',' ','s','u',' ','n','o','v','e','l','a',' ','L','a',' ','C','a','s','a',',',' ','p','e','r','o',' ','s','e',' ','d','e','c','i','d','i',
                      'o',' ','p','o','r',' ','C','i','e','n',' ','a','n','i','o','s',' ','d','e',' ','s','o','l','e','d','a','d',' ','p','a','r','a',' ','e','v','i','t','a','r',' ','c','o','n','f','u','s',
                      'i','o','n','e','s',' ','c','o','n',' ','l','a',' ','n','o','v','e','l','a',' ','L','a',' ','C','a','s','a',' ','G','r','a','n','d','e',',',' ','p','u','b','l','i','c','a','d','a',
                      ' ','e','n',' ','1','9','5','4',' ','p','o','r',' ','s','u',' ','a','m','i','g','o',',',' ','A','l','v','a','r','o',' ','C','e','p','e','d','a',' ','S','a','m','u','d','i','o','\0'};
    char cad2;
    printf("\nDigite la vocal: ");
    scanf("%c ", &cad2);
    char cad2Mayus = cad2 - 'a' + 'A';
    int n = 0;
    int cont1 = 0;
    int flag = 0;
    int flag2 = 0;
    while (card[n] != '\0'){
        if (card[n] == cad2 || card[n] == cad2Mayus){
            cont1++;
        }
        if(card[n] == cad2 && flag == 0){
            card[n] = card[n] - 'a' + 'A';
            flag = 1;
        }
        if(card[n] == cad2 && flag2 == 0){
            card[n] = card[n] - 'a' + 'A';
            flag2 = 1;
        }
        else if (card[n] == cad2Mayus && flag2 == 0){
            flag2 = 1;
        }
        else if(card[n] == cad2 && flag2 == 1){
            flag2 = 0;
        }
        else if (card[n] == cad2Mayus && flag2 == 1){
            card[n] = card[n] - 'A' + 'a';
            flag2 = 0;
        }
        n++;
    }
    n = 0;
    while (card[n] != '\0'){
        printf("%c", card[n]);
        n++;
    }
    printf("\nhabian %d %c", cont1, cad2);
}

void punto4(){
    char card[400] = {'M','i',' ','p','r','o','f','e',' ','c','o','n','s','i','g','u','i','o',' ','u','n','a',' ','c','a','m','a','r','a',' ','v','i','e','j','a',' ','a','n','t','e','s',' ','d','e',
                      ' ','l','a',' ','p','a','n','d','e','m','i','a',',',' ','p','e','r','o',' ','c','o','m','o',' ','a','h','o','r','a',' ','e','s',' ','u','n',' ','p','r','o','f','e',' ','d','i','g',
                      'i','t','a','l',',',' ','e','l',' ','p','r','o','f','e',' ','s','e',' ','c','o','n','s','i','g','u','i','o',' ','u','n','a',' ','c','a','m','a','r','a',' ','n','u','e','v','a',' ','m',
                      'a','s',' ','b','o','n','i','t','a','.',' ','P','a','s','a','d','o',' ','e','l',' ','t','i','e','m','p','o',' ','s','e',' ','d','i','o',' ','c','u','e','n','t','a',' ','q','u','e',
                      ' ','l','a',' ','c','a','m','a','r','a',' ','n','u','e','v','a',' ','a','u','n','q','u','e',' ','b','o','n','i','t','a',' ','e','r','a',' ','u','n','a',' ','c','a','m','a','r','a',' ',
                      'm','a','l','a',',',' ','p','e','r','o',' ','q','u','e',' ','b','o','b','a','d','a',',',' ','a','l',' ','f','i','n',' ','y',' ','a','l',' ','c','a','b','o',',',' ','y','a',' ','s',
                      'e','a',' ','c','o','n',' ','u','n','a',' ','c','a','m','a','r','a',' ','v','i','e','j','a',' ','o',' ','u','n','a',' ','c','a','m','a','r','a',' ','n','u','e','v','a',',',' ',
                      'n','u','n','c','a',' ','l','a',' ','m','u','e','s','t','r','a',' ','e','n',' ','c','l','a','s','e','\0'};
    char card2[400];

    int n = 0;
    int m = 0;
    while (card[n] != '\0'){
        if(card[n] == 'c' && card[n+1] == 'a' && card[n+2] == 'm' && card[n+3] == 'a' && card[n+4] == 'r' && card[n+5] == 'a'){
            n = n+7;
        }
        else {
            card2[m] = card[n];
            m++;
            n++;
        }
    }
    n = 0;
    while (card2[n] != '\0'){
        printf("%c", card2[n]);
        n++;
    }
}

int main(){

    int opc;

    printf("\nDigite que funcion desea usar, 1, 2, 3, 4 o 0 para salir: ");
    scanf("%d", &opc);

    while (opc != 0){
        if (opc == 1){
            punto1();
        }
        else if (opc == 2){
            punto2();
        }
        else if (opc == 3){
            punto3();
        }
        else if (opc == 4){
            punto4();
        }
        printf("\nDigite que funcion desea usar, 1, 2, 3 o 0 para salir: ");
        scanf("%d", &opc);
    };

    return 0;
}