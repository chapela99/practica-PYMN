#include <stdio.h>
#include <math.h>
float ftrig(float x);
float flog(float x);
/*void biseccion(x0,x1,x2,n);
Programa para encontrar raices por el metodo de biseccion */
float ferrabs(float x, float y);
void biseccion(float x0, float x1,int n,float (*f)(float),
float (*g)(float, float));
int main()
{
float x0, x1;
int e, step = 1;
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);
/* metodo de biseccion */
biseccion(x0,x1,e,ftrig,ferrabs);
/* segunda funcion*/
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
printf("Ingresar numero de veces:\n");
scanf("%d", &e);
biseccion(x0,x1,e,flog,ferrabs);
return 0;
}
/*
Ecuaciones de las funciones.
*/
float ftrig(float x) {
return (2*x*cos(2*x))-pow((x+1),2);
}
float flog(float x) {
return log(x)+pow(x,2)-4;
}
float ferrabs(float x, float y){
return 100*fabs((x-y)/y);}/*funcion de error */
/*metodo de biseccion, rengon 43*/
void biseccion(float x0,float x1, int n, float (*f)(float),
float (*g)(float,float))
{
float f0, f1, x2,f2, error;
int vez =1;
/* calculando el valor de las funciones */
f0 = (*f)(x0);
f1 = (*f)(x1);
/* revisando si la raiz esta entre los limites. */
while( f0 * f1 > 0.0)
{
printf("valores inadecuados.\n");
printf("\n Ingresar los 2 valores iniciales:\n");
scanf("%f%f", &x0, &x1);
f0 = (*f)(x0);
f1 = (*f)(x1);
}
printf("\n n\tx0\tx1\tx2\tf(x2)\t error\n");
do
{
x2 = (x0 + x1)/2;
f2 = (*f)(x2);
error = (*g)(x1,x2);
printf("%d\t%3.3f\t%3.3f\t%3.3f\t%3.3f\t%2.5f\n",
vez, x0, x1, x2, f2,error);
if( f0 * f2 < 0)
{
x1 = x2;
f1 = f2;
}
else
{
x0 = x2;
f0 = f2;
}
vez = vez + 1;
}while(vez<=n);
printf("\nLa raíz es: %f\n", x2);

