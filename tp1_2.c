#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 2-A
int cuadrado(int a);

// 2-B
void cuadra2(int a);

// 2-C
void DatosVariable(int a);

// 2-D
void invertir(int *a,int *b);

// 2-E
void orden(int *a,int *b);


// INICIO MAIN
int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);


int variable=0,variable2=0;
int *punteroA;
int *punteroB;


    printf("Ingrese un par de numeros para hacer uso de las funciones:\n");
    scanf("%d%d",&variable,&variable2);
    printf("El cuadrado de a devolviendo int es: %d\n\n",cuadrado(variable));
    punteroA=&variable;
    punteroB=&variable2;

    cuadra2(variable);
    DatosVariable(variable);

    invertir(punteroA,punteroB);

    printf("el contenido de a es: %d\n",variable);
    printf("el contenido de b es: %d\n\n",variable2);

    orden(punteroA,punteroB);

    printf("El menor es a: %d y el mayor es b: %d\n\n", variable,variable2);
  
    getchar();
    return 0;
}
//FIN MAIN


// FUNCIONES


int cuadrado(int a){
    return a*a;
}

void cuadra2(int a){
    printf("El cuadrado de a devolviendo void es: %d\n\n",a*a);
    return;
}

void DatosVariable(int a){
    printf("El contenido de la variable a es: %d\nLa direccion de a memoria es: %p\n\n",a,&a);
    return;
}


void invertir(int *a,int *b){

    int aux=0;
    aux=*a;
    *a=*b;
    *b=aux;

    return;
}



void orden(int *a,int *b){
    int aux=0;
    if (*a < *b)
    {
        return;
    }else{
        aux=*a;
        *a=*b;
        *b=aux;
    }
    

    return;
}