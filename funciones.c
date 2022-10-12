#include "funciones.h"

#include <stdio.h>
#include <stdlib.h>

int Ult_Dig(int num)
{
    return num % 10;
}

int Pri_Dig(int num)
{
    while(num > 10)
        num = num / 10;

    return num;
}

int Pri_2_Dig(int num)
{
    while(num > 100)
        num = num / 10;
    
    return num;
}

int Es_Par(int num)
{
    if(num % 2 == 0)
        return 1;
    else
        return 0;
}

int Descuadrado(int num)
{
    int ult = Ult_Dig(num);
    if( Pri_Dig(num) == (ult * ult) || Pri_2_Dig(num) == (ult * ult) )
        return 1;
    else
        return 0;
}

int Reparado(int num)
{
    if( (Es_Par(num) == 1) && (Es_Par(Pri_Dig(num)) == 0) )
        return 1;
    else
        return 0;
}

void Descuadrados(int *num_Desc)
{
    int indice;
    for(int i = 1, indice = 0; indice < 20; i++){
        if(Descuadrado(i) == 1){
            num_Desc[indice] = i;
            indice++;
        }
    }
}

void Reparados(int *num_Rep)
{
    int indice;
    for(int i = 1, indice = 0; indice < 20; i++){
        if(Reparado(i) == 1){
            num_Rep[indice] = i;
            indice++;
        }
    }
}

void Imprimir(int *arreglo_num)
{
    for(int i = 0; i < 20; i++){
        printf("\n%d -> %d", i, arreglo_num[i]);
    }
}