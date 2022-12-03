#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    double valorA, valorB, valorC, trian, circ, trap, quad, retang;
    
    scanf("%lf%lf%lf", &valorA, &valorB, &valorC);
    
    trian = valorA * valorC / 2;
    circ = PI * pow(valorC, 2);
    trap = (valorA + valorB) * valorC / 2;
    quad = pow(valorB, 2);
    retang = valorA * valorB;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", trian, circ, trap, quad, retang);
    
    return 0;
}