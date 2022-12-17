#include <stdio.h>

int main()
{
    char vendedor[20];
    double salarioFixo, totalVendas, totalFinal;
    
    scanf("%s%lf%lf", vendedor, &salarioFixo, &totalVendas);
    
    totalFinal = salarioFixo + (totalVendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", totalFinal);
    
    return 0;
}