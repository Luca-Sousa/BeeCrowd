#include <stdio.h>

int main()
{
    int distancia, minutos;
    
    scanf("%d", &distancia);

    minutos = 2 * distancia; // 1 km = 2 minutos;

    printf("%d minutos\n", minutos);

    return 0;
}