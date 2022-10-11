#include <stdio.h>
#include <stdlib.h>

//Funciones
#include "funciones.h"
#include "funciones.c"

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char **argv)
{
    //if(argc > 1){
        printf("Hello AyP!\n");

        int indice = 20;

        //Arreglo de números descuadrados y reparados.
        int Array_Desc[indice];
        int Array_Rep[indice];

        printf("\nSe calcularán los primeros 20 números Descuadrados.");   
        printf("\nEstos se guardarán en un arreglo de enteros.");

        /* Llamado a la función Descuadrados */
        Descuadrados(&Array_Desc);

        printf("\nAhora, se calcularán los primeros 20 números Reparados.");   
        printf("\nEstos se guardarán en un arreglo de enteros.");

        /* Llamado a la función Reparados */
        Reparados(&Array_Rep);

        printf("\nAhora procederemos a imprimir los dos arreglos.");
        printf("\nNúmeros descuadrados:");

        Imprimir(Array_Desc, indice);

        printf("\nNúmeros reparados:");
        
        Imprimir(Array_Rep, indice);
    //}
    //else{
        //printf("Bye\n");
    //}
    return 0;
}