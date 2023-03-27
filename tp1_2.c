#include<stdio.h>
int cuadrado(int *p);
void cuadrado2(int *p2);
void Invertir(int *pa,int *pb);
void orden(int *pa,int *pb);

int main(){
//4a



int num;


int *p= &num;

printf("ingrese un numero:\n");
scanf("%d",&num);

int total= cuadrado(p);


printf("el cuadrado es: %d\n",total);

//4b


int num2=6;
int *p2=&num2;



cuadrado2(p2);
printf("--4b--\n");
printf("la direccion de la variable %d\n",p2);
printf("el contenido es %d\n",*p2);



//4d y 4e


int a, b;
int *pa=&a;

int *pb=&b;

printf("ingrese a\n");
scanf("%d",&a);

printf("ingrese b\n");
scanf("%d",&b);




Invertir(pa,pb);

printf("---INVERTIR---\n");

printf("el valor invertido de a es %d\n", *pa);


printf("el valor invertido de b es %d\n", *pb);

printf("---ORDENAR---\n");
orden(pa,pb);






    return 0;
}


int cuadrado(int *p){


   *p = (*p) * (*p);

   return *p;

}

void cuadrado2(int *p2){

   *p2 = (*p2) * (*p2);


}

void Invertir(int *pa,int *pb){
    int aux;

aux=*pa;

*pa=*pb;

*pb=aux;




}

void orden(int *pa,int *pb){
int aux;

   if (*pa>*pb)
{
  *pa=*pa;
 printf("el valor ordenado de a es %d\n",*pa);
printf("el valor ordenado de b es %d\n",*pb);

}else if (*pa<*pb)
{
   aux=*pa;
    *pa=*pb;
    
    *pb=aux;
    
printf("el valor ordenado de a es %d\n",*pa);
printf("el valor ordenado de b es %d\n",*pb);



}

   


}