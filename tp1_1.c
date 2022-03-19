#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);

    int a =24, *puntero;
    puntero = &a;

    
    printf("Contenido del puntero: %d \n",*puntero);
    printf("Direccion almacenada por el puntero: %p \n",puntero);
    printf("Direccion de variable: %p \n",&a);
    printf("Direccion de memoria del puntero %p: \n",&puntero);
    printf("Tamano de variable: %d \n", sizeof(a));

    getchar();
    return 0;
}