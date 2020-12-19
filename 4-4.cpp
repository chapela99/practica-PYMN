/* programa que captura las entradas de una matriz, int main renglon 10*/
#include <stdio.h>
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02);
/*renglon 43;*/
void mostrar(int mult[][10], int filas01, int columnas02);
/*renglon 54;*/
int main()
{
int matriz01[10][10], matriz02[10][10], mult[10][10], sum[10][10],
filas01, columnas01, filas02, columnas02, i, j, k;
printf("Ingresar filas y columnas para la primer matriz: ");
scanf("%d %d", &filas01, &columnas01);
printf("Ingresar filas y columnas para la segunda matriz: ");
scanf("%d%d", &filas02, &columnas02);
/* */
ingresar_matriz(matriz01, matriz02, filas01, columnas01,
filas02, columnas02);
/* */
printf("la matriz a es: \n");
mostrar(matriz01, filas01, columnas01);
/* mostrar suma*/
printf("la matriz b es:\n");
mostrar(matriz02,filas02, columnas02);
return 0;
}
/*renglon 43 */
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02)
{
int i, j;
printf("\n Ingresar elementos de la matriz 1:\n");
for(i = 0; i < filas01; ++i)
{
for(j = 0; j < columnas01; ++j)
{
printf("Ingresar elemento a%d%d: ", i + 1, j + 1);
scanf("%d", &matriz01[i][j]);
}
}
printf("\n Ingresar elementos de la matriz 2:\n");
for(i = 0; i < filas02; ++i)
{
for(j = 0; j < columnas02; ++j)
{
printf("Ingresar elemento b%d%d: ", i + 1, j + 1);
scanf("%d", &matriz02[i][j]);
}
}
}
/*renglon 54 }*/
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
/* renglon 94*/

