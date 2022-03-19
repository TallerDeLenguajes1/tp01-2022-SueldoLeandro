#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);

    printf("Hola Mundo");


    getchar();
    return 0;
}