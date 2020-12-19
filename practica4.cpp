#include <stdio.h>
void ingresar_vector(int vector01[], int vector02[], int tamano);
/* renglon 26 */
void mostrar_vector(int sumar[], int tamano);
/*renglon 45 */
void suma_vectores(int vector01[], int vector02[], int
suma_resultado[], int tamano); /* renglon 56 */
int main()
{
int vector01[10], vector02[10], sumar[10], sum[10], tamano, i, j, k;
printf("Ingresar entradas del vector: ");
scanf("%d",&tamano);
// Funcion para tomar entradas
ingresar_vector(vector01, vector02, tamano);
// funcion sumadora
suma_vectores(vector01, vector02, sum, tamano);
// funcion para mostrar suma
mostrar_vector(sum,tamano);
return 0;
}
/* renglon 25 */
void ingresar_vector(int vector01[], int vector02[], int tamano)
int i, j;
printf("\n ingrese entradas del vector a:\n");
for(i = 0; i < tamano; ++i)
{
printf("ingresar elementos a%d: ", i + 1);
scanf("%d", &vector01[i]);
}
printf("\n ingrese entradas del vector b:\n");
for(i = 0; i < tamano; ++i)
{
printf("ingresar elementos b%d: ", i + 1);
scanf("%d", &vector02[i]);
}
}
/* renglon 45*/
void mostrar_vector(int sumar[], int tamano)
{
int i, j;
printf("\n vector resultante:\n");
for(i = 0; i < tamano; ++i)
{
printf("%d ", sumar[i]);
}
printf("\n");
}
/* renglon 56 */
void suma_vectores(int vector01[], int vector02[], int sum[], int tamano)
{
int i;
// inicializar entradas a 0
for(i = 0; i < tamano; ++i)
{
sum[i] = 0;
}
/*Sumar vectores vector01 and vector02 y guardar en
array sumar.*/
for(i = 0; i < tamano; ++i)
{
sum[i] += vector01[i] + vector02[i];
}

