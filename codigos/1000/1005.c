#include <stdio.h>

#define PESO_1 3.5
#define PESO_2 7.5

int main()
{
    double nota1, nota2, media;
    
    scanf("%lf%lf", &nota1, &nota2);
    
    media = (nota1 * PESO_1 +  nota2 * PESO_2) / 11;
    
    printf("MEDIA = %.5lf\n", media);

    return 0;
}