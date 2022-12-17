#include <stdio.h>

#define PESO_1 2
#define PESO_2 3
#define PESO_3 5

int main()
{
    double nota1, nota2, nota3, media;
    
    scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
    
    media = (nota1 * PESO_1 +  nota2 * PESO_2 + nota3 * PESO_3) / 10;
    
    printf("MEDIA = %.1lf\n", media);

    return 0;
}