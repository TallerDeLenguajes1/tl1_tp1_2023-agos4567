#include<stdio.h>

int main(){

printf("Hola mundo");

//punto 3e

int *p;

int a;

p=&a;

printf("ingrese un numero :\n");
scanf("%d", &a);


printf("el contenido apuntado de p: %d\n", *p);
printf("direccion de memoria es del puntero: %d\n", &p);
printf("direccion de memoria de la variable es %d :\n", &a);
printf("el tamanio de memoria utilizado por la variable: %d\n", sizeof(a));

    return 0;
}