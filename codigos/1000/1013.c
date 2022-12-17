#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, valorC, mediaAB, mediaABC;
    
    scanf("%d%d%d", &valorA, &valorB, &valorC);
    
    mediaAB = (valorA + valorB + abs(valorA-valorB)) / 2;
    mediaABC = (mediaAB + valorC + abs(mediaAB-valorC)) / 2; //FORMA 1

    //FORMA 2:
    // Expressão ? Comando_1 : Comando_2
    // maior = (maior_ab > valor_c) ? maior_ab : valor_c (OPERADOR TERNÁRIO)
    
    printf("%d eh o maior\n", mediaABC);
    
    
    return 0;
}