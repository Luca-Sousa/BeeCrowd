#include <stdio.h>

int main()
{
    int tempo, veloc_media, deslocamento;
    double qt_de_litros;

    scanf("%d%d", &tempo, &veloc_media);

    deslocamento = veloc_media * tempo;

    qt_de_litros = (double) deslocamento / 12; // O carro faz 12Km/L

    printf("%.3lf\n", qt_de_litros);

    return 0;
}