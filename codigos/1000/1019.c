#include <stdio.h>

int main()
{
    int valor_segundos, horas=0, minutos=0, segundos=0; 

    scanf("%d", &valor_segundos);

    horas = valor_segundos / 3600;  // 1 Hora = 3600 Seg.
    minutos = valor_segundos % 3600 / 60;  // 1 Min. = 60 Seg.
    segundos = valor_segundos % 3600 % 60 / 1; // 1 Seg

    printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}