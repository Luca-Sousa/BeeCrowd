#include <stdio.h>

int main()
{
    int numFun, horasTrab;
    double valorHora, salarioFun;

    scanf("%d%d%lf", &numFun, &horasTrab, &valorHora);
    
    salarioFun = valorHora * horasTrab;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numFun, salarioFun);
    
    return 0;
}