#include <stdio.h>

int main()
{
    int distanciaPercorrida;
    double combustivelGasto, consumoMedio;
    
    scanf("%d%lf", &distanciaPercorrida, &combustivelGasto);
    
    consumoMedio = distanciaPercorrida / combustivelGasto;
    
    printf("%.3lf km/l\n", consumoMedio);
    
    return 0;
}