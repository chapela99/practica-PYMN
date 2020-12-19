/*Programa que suma 2 matrices:::. int main renglon 14*/
#include <stdio.h>
void ingresar_matriz(int matriz01[][10], int matriz02[][10], int
filas01, int columnas01, int filas02, int columnas02);
/* renglon 44 */
void mostrar(int mult[][10], int filas01, int columnas02);
/* renglon 70 */
void suma_matrices(int matriz01[][10], int matriz02[][10], int
suma_resultado[][10], int filas01, int columnas01, int filas02, int
columnas02);
/* renglon 84*/
int main()
{
int matriz01[10][10], matriz02[10][10], mult[10][10], sum[10][10],
filas01, columnas01, filas02, columnas02, i, j, k;
printf("Ingresar filas y columnas para la primer matriz: ");
scanf("%d %d", &filas01, &columnas01);
printf("Ingresar filas y columnas para la segunda matriz: ");
scanf("%d%d", &filas02, &columnas02);
/* while(columnas01 != filas02)
{
printf("error! los numeros no cuadran");
printf("Ingresar filas y columnas para la primer matriz: ");
scanf("%d%d", &filas02, &columnas02);
printf("Ingresar filas y columnas para la segunda matriz: ");
scanf("%d%d", &filas02, &columnas02);
}*/
/* funcion para tomar las entradas de la primer matriz */
ingresar_matriz(matriz01, matriz02, filas01, columnas01,
filas02, columnas02);
/* funcion sumadora */
suma_matrices(matriz01, matriz02, sum, filas01, columnas01,
filas02, columnas02);
/* mostrar suma*/
printf("la suma es:\n");
mostrar(sum,filas01, columnas02);
return 0;
}
/* renglon 44 ingresar matriz */
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
/* renglon 70 mostrar*/
void mostrar(int mult[][10], int filas01, int columnas02)
{
int i, j;
printf("\n matriz salida:\n");
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
/* renglon 84 suma matrices*/
void suma_matrices(int matriz01[][10], int matriz02[][10], int
sum[][10], int filas01, int columnas01, int filas02, int columnas02)
{
int i, j, k;
/*Declarando elementos de la matriz sum como 0 */

