#include <stdio.h>

int main()
{
    int valor_dias, anos=0, meses=0, dias=0; 

    scanf("%d", &valor_dias);

    anos = valor_dias / 365;  // 1 Ano = 365 Dias
    meses = valor_dias % 365 / 30;  // 1 Meses = 30 Dias
    dias = valor_dias % 365 % 30 / 1; // 1 dia

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
 
    return 0;
}