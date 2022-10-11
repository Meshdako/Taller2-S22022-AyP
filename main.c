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
    if(argc > 1){
        printf("Hello World!\n");
        printf("Es 75416 un número Reparado?: %d", Reparado(25416));        
    }
    else{
        printf("Bye\n");
    }
    return 0;
}