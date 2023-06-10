#include <stdio.h>
#include <math.h>
#include "funciones.h"
void ingreseComponente(float *componente, char componenteChar, int i)
{
    printf("Ingrese la coordenada %c del punto %d: ", componenteChar, i);
    scanf("%f", componente);
}

void calculos(float puntos[3][3])
{
    float R, r, H, h, volumen, area,volumentotal,areatotal;

    R = sqrt(pow((puntos[0][0] - puntos[1][0]), 2) + pow((puntos[0][1] - puntos[1][1]), 2) + pow((puntos[0][2] - puntos[1][2]), 2));
    r = R / 2;
    H = sqrt(pow((puntos[2][0] - puntos[1][0]), 2) + pow((puntos[2][1] - puntos[1][1]), 2) + pow((puntos[2][2] - puntos[1][2]), 2));
    h = H / 2;

    float g = 3.84;

    volumen = (h * M_PI / 3) * (pow(r, 2) + pow(R, 2) + R * r);
    volumentotal=volumen*2;
    printf("El volumen  del cono truncado es: %.2f\n", volumen);
    printf("El volumen total del cono truncado es: %.2f\n", volumentotal);
float generatriz=3.84;
    area = M_PI * (pow(R, 2) + pow(r, 2) + 3.84*(R+r) );
    areatotal=area*2;
    printf("El área  del cono truncado es: %.2f\n", area);
    printf("El área total del cono truncado es: %.2f\n", areatotal);
}