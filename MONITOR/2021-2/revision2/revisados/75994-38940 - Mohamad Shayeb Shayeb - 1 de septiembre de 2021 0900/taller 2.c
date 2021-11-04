#include <stdio.h>
int sumarDigitos(int numero){
    int digito, suma = 0;

    if(numero<10){
        return 0;
    }

    while(numero != 0) {
        digito = numero % 10;
        numero /= 10;
        suma += digito;
    }
    return suma;

}


int seleccionarMenu(){
    int seleccion;
    printf("------------MENU------------ \n\n");

    printf("Presione 1 para imprimir asteriscos\n");
    printf("Presione 2 para jugar el juego del rango\n");
    printf("Presione 3 para contabilizar la Farra\n");
    printf("Presione 4 para los numeros primos\n");
    printf("Presione 0 para salir\n\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&seleccion);
    return seleccion;
}

void imprimirAsteriscos(){
    int numeroLineas, contador = 0;

    while(contador <=10){

        printf("Ingrese el numero de lineas: ");
        scanf("%d",&numeroLineas);

        if(numeroLineas <= 0){
            break;
        }

        if(numeroLineas <= 15){
            printf("%d ",numeroLineas);
            for (int i=0; i<numeroLineas; i++){
                printf("* ");
            }
            printf("%d\n",numeroLineas);

            printf("%d ",numeroLineas);
            for (int i=0; i<numeroLineas; i++){
                printf("* ");
            }
            printf("%d\n",numeroLineas);
        }


        contador++;
    }
}

void juegoRango(){
    int numeroUsuario,contador71=0,contador50=0, iteraciones;
    float promedio,suma= 0, n=0;

    printf("Ingrese el numero de veces que digitara numeros: ");
    scanf("%d",&iteraciones);


    for (int i=0; i<iteraciones; i++){

        // leer input del usuario
        printf("Ingrese su numero: ");
        scanf("%d",&numeroUsuario);

        // verificar que esté en el rango
        while(numeroUsuario < 50 || numeroUsuario > 80){
            printf("El numero esta mal digitado, intente de nuevo \n");
            printf("Ingrese su numero: ");
            scanf("%d",&numeroUsuario);
        }

        // verificar si está entre 50 y 60
        if (numeroUsuario >= 50 && numeroUsuario <=60){
            contador50++;
        }

        //verificar si es 71
        if(numeroUsuario == 71){
            contador71++;

            if(contador71 == 1){
                printf("Felicitaciones!\n");
            }
            else if(contador71 == 2){
                printf("Felicitaciones, venga manana por un premio! \n");
            }
            else{
                 printf("¡¡esta muy sospechoso!! \n");
            }

        }
        // si no, contar el numero para el promedio
        else{
            suma += numeroUsuario;
            n++;
        }

    }

    promedio = suma / n;


    printf("\nCantidad de veces que el usuario digito numeros entre 50 y 60: %d \n",contador50);
    printf("Promedio de los numeros digitados: %f \n",promedio);



}

void contabilizarFarra(){

    int camionesA = 0, camiones34 = 0, cantidadProductos = 0, cantidadCamiones;
    int kilosCebolla = 0, KilosNaranja = 0, kilosMango = 0, kilos = 0;
    char tipoCamion;

    // Preguntar por la cantida de camiones
    printf("¿Cuantos camiones llegaron el dia de hoy?: ");
    scanf("%d",&cantidadCamiones);


    for (int i = 0; i<cantidadCamiones; i++){
        //Preguntar el tipo de camion
        printf("¿Que tipo de camion es el camion numero %d? (A/B) ",i+1);
        scanf("%s",&tipoCamion);

        if (tipoCamion == 'A' || tipoCamion == 'a'){
            camionesA++;
        }
        else{
            //Preguntar cuántos productos trae el camión de tipo B
            printf("¿Cuántos productos trae el camion %d? ",i+1);
            scanf("%d",&cantidadProductos);

            switch(cantidadProductos){
                case 2:
                    printf("¿Cuantos Kilos de cebolla trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    kilosCebolla += kilos;
                    break;
                case 3:
                    camiones34++;

                    printf("¿Cuantos Kilos de cebolla trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    kilosCebolla += kilos;

                    printf("¿Cuantos Kilos de naranja trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    KilosNaranja += kilos;

                    break;

                case 4:
                    camiones34++;

                    printf("¿Cuantos Kilos de cebolla trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    kilosCebolla += kilos;

                    printf("¿Cuantos Kilos de naranja trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    KilosNaranja += kilos;

                    printf("¿Cuantos Kilos de mango trae el camion %d? ",i+1);
                    scanf("%d",&kilos);
                    kilosMango += kilos;

                    break;
            }
        }
    }

    printf("\n");
    printf("Cantidad de camiones tipo A: %d \n",camionesA);
    printf("Cantidad de camiones de tipo 3 y 4: %d \n",camiones34);
    printf("Cantidad de Kilos de cebolla: %d \n",kilosCebolla);
    printf("Cantidad de Kilos de naranja: %d \n",KilosNaranja);
    printf("Cantidad de Kilos de mango: %d \n\n",kilosMango);

}

void contarPrimos(){
    int casos, divisores, contador3C = 0, suma;

    printf("Ingrese el numero hasta el cual se calcularan primos:");
    scanf("%d",&casos);

    printf("\nLos numeros primos hasta %d son: \n",casos);
    //calcular los primos hasta n
    for (int i = 1; i <= casos; i++){
        divisores = 0;
        for(int j=1;j<=i;j++)
        {

            if(i%j==0)
            {
                divisores++;
            }
        }
        if (divisores == 2){
            printf("%d ",i);
        }
    }

    printf("\n\n");
    printf("Los numeros primos de 3 digitos son: \n");
    //calcular los primos de 3 dígitos
    for (int i = 1; i <= 999; i++){
        divisores = 0;
        for(int j=1;j<=i;j++)
        {

            if(i%j==0)
            {
                divisores++;
            }
        }
        if (divisores == 2 && i >= 100){
            printf("%d ",i);
            contador3C++;
        }
    }

    printf("\n");
    printf("Los numeros primos que tienen 3 digitos son un total de: %d\n\n",contador3C);

    printf("Los numeros primos cuya suma de digitos tambien es un numero primo son: \n");

    //encontrar numeros primos
    for (int i = 1; i <= casos; i++){
        divisores = 0;
        for(int j=1;j<=i;j++)
        {

            if(i%j==0)
            {
                divisores++;
            }
        }
        if (divisores == 2){
            //obtener la suma del número primo
            suma = sumarDigitos(i);

            if (suma !=0){
                int contador=0;
                //averiguar si la suma también es número primo
                for(int k=1; k<=suma; k++){
                    if (suma % k == 0){
                        contador++;
                    }
                }
                //imprimir el numero si se cumple que es primo la suma de
                //sus dígitos
                if (contador == 2){
                    printf("%d ",i);
                }
            }
        }
    }


    printf("\n\n");

}

int main()
{
    int inputUsuario=5;

    while(inputUsuario > 0){
        inputUsuario = seleccionarMenu();

        switch(inputUsuario){
            case 1:
                imprimirAsteriscos();
                break;

            case 2:
                juegoRango();
                break;

            case 3:
                contabilizarFarra();
                break;

            case 4:
                contarPrimos();
                break;

            case 0:
                printf("Fin de la ejecucion. \n");
                return 0;
        }
    }

    return 0;
}
