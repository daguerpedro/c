#include "../utils.h"

void hipotenusa()
{
    float a, b, d;  

    printf("Informe o lado A: ");
    scanf("%f", &a);
        
    printf("Informe o lado B: ");
    scanf("%f", &b);
    
    d = hypotf(a, b);
    printf("\nA hipotenusa e: %.1f\n\n", d);
}