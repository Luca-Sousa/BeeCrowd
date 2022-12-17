#include <stdio.h>

int main()
{
    int valor, qtde100=0, qtde50=0, qtde20=0, qtde10=0, qtde5=0, qtde2=0, qtde1=0; 

    scanf("%d", &valor);

    qtde100 = valor / 100;
    qtde50 = valor % 100 / 50;
    qtde20 = valor % 100 % 50 / 20;
    qtde10 = valor % 100 % 50 % 20 / 10;
    qtde5 = valor % 100 % 50 % 20 % 10 / 5;
    qtde2 = valor % 100 % 50 % 20 % 10 % 5 / 2;
    qtde1 = valor % 100 % 50 % 20 % 10 % 5 % 2 / 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", qtde100);
    printf("%d nota(s) de R$ 50,00\n", qtde50);
    printf("%d nota(s) de R$ 20,00\n", qtde20);
    printf("%d nota(s) de R$ 10,00\n", qtde10);
    printf("%d nota(s) de R$ 5,00\n", qtde5);
    printf("%d nota(s) de R$ 2,00\n", qtde2);
    printf("%d nota(s) de R$ 1,00\n", qtde1);

    return 0;
}