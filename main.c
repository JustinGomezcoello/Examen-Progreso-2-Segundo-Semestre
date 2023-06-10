#include <stdio.h>
#include <math.h>
#include "funciones.h"
void ingreseComponente(float *componente, char componenteChar, int i);
void calculos(float puntos[3][3]);

int main(int argc, char *argv[])
{
    float puntos[3][3] = {{4, 0, 4}, {1, 0, 3}, {2, 2, 2}};
    char componente[3] = {'x', 'y', 'z'};
    float volumen, area;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ingreseComponente(&puntos[i][j], componente[j], i + 1);
        }
    }
    calculos(puntos);

    return 0;
}