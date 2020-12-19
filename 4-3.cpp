/* programa que llena un arreglo con numeros aleatorios */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02);
/* renglon 31 */
void mostrar(int mult[][10], int filas01, int columnas02);
/*renglon 55*/
int main()
{
int matriz01[10][10], matriz02[10][10], mult[10][10], sum[10][10],
filas01, columnas01, filas02, columnas02, i, j, k;
printf("Ingresar filas y columnas para la primer matriz: ");
scanf("%d %d", &filas01, &columnas01);
printf("Ingresar filas y columnas para la segunda matriz: ");
scanf("%d%d", &filas02, &columnas02);
/* funcion para tomar las entradas de la primer matriz */
ingresar_matriz(matriz01, matriz02, filas01, columnas01,
filas02, columnas02);
/* */
printf("la matriz a es: \n");
mostrar(matriz01, filas01, columnas01);
/* */
printf("la matriz b es:\n");
mostrar(matriz02,filas02, columnas02);
return 0;
}
/* linea 31 */
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02)
{
int i, j;
/* printf("\n Ingresar elementos de la matriz 1:\n");*/
srand(time(NULL));
for(i = 0; i < filas01; ++i)
{
for(j = 0; j < columnas01; ++j)
{
matriz01[i][j] = rand();
}
}
/* printf("\n Ingresar elementos de la matriz 2:\n");*/
for(i = 0; i < filas02; ++i)
{
for(j = 0; j < columnas02; ++j)
{
matriz02[i][j] = rand();
}
}
}
/* renglon 54*/
void mostrar(int mult[][10], int filas01, int columnas02)
{
int i, j;
/* printf("\n matriz salida:\n");*/
for(i = 0; i < filas01; ++i)
{
for(j = 0; j < columnas02; ++j)
{
printf("%d ", mult[i][j]);
if(j == columnas02 - 1)
printf("\n\n");
}
}
}
/* renglon */

