#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, valorC, mediaAB, mediaABC;
    
    scanf("%d%d%d", &valorA, &valorB, &valorC);
    
    mediaAB = (valorA+valorB+abs(valorA-valorB)) / 2;
    mediaABC = (mediaAB+valorC+abs(mediaAB-valorC)) / 2;
    
    printf("%d eh o maior\n", mediaABC);
    
    
    return 0;
}