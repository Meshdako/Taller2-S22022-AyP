#ifndef FUNCIONES_H
#define FUNCIONES_H

//Último dígito
int Ult_Dig(int num);

//Primer dígito
int Pri_Dig(int num);

//Primeros dos dígitos.
int Pri_2_Dig(int num);

//Es par
int Es_Par(int num);

//Función que determine si un número natural es descuadrado. 
int Descuadrado(int num);

//Función que determine si un número natural es reparado.
int Reparado(int num);

//Función que cree un arreglo con los primeros n ≤ 20 números descuadrados. 10
void Descuadrados(int *num_Desc);

//Función que cree un arreglo con los primeros n ≤ 20 números reparados.
void Reparados(int *num_Rep);

//Función que despliegue en pantalla los n elementos un arreglo. Usarla para ver los dos arreglos creados. 
void Imprimir(int *arreglo_num);

#endif  //FUNCIONES_h