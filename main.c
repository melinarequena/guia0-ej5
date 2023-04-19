/* Guia  0, Ej 5) Práctica
Escriba una función que intercambie el valor de dos variables enteras utilizando
punteros y los muestre antes y después del intercambio por pantalla. */

#include<stdio.h>

void cambiar(int *, int *);
int main()
{
    int a, b, *aptr,  *bptr;
    a=2;
    b=3;
    aptr=&a;
    bptr=&b;
    cambiar(aptr, bptr); // envia la direccion de la variable a y b
    printf("El valor de la variable a es %d y b es %d\n", a, b);

    return 0;
}

void cambiar(int *aptr, int *bptr){
    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}
