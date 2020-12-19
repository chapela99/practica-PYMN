/* programa que realiza la suma de los elementos de un vector */
#include<stdio.h>
int suma_traza(int a[],int n)
{
int i,suma=0;
for(i=0; i<n; i++)
{
suma+=a[i];
}
return suma;
}
int main()
{
int a[1000],i,n,suma;
printf("Ingrese el tamano del arreglo : ");
scanf("%d", &n);

printf("Ingrese los elementos del arreglo :\n");
for(i=0; i<n; i++)
{
printf("a%d: ",i+1);
scanf("%d",&a[i]);
}
suma=suma_traza(a,n);
printf("la suma de las entradas del arreglo es: %d\n",suma);
}

