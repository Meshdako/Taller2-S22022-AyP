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
        system("clear");
        printf("Hello AyP!\n");
        
        //Arreglo de números descuadrados y reparados.
        int Array_Desc[20];
        int Array_Rep[20];

        /* Llamado a la función Descuadrados */
        Descuadrados(Array_Desc);

        Reparados(Array_Rep);
        
        printf("\n\tNúmeros descuadrados.");
        Imprimir(Array_Desc);
        

        printf("\n\tNúmeros reparados.");
        Imprimir(Array_Rep);
    //}
    //else{
        //printf("Bye\n");
    //}
    return 0;
}