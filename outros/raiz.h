#include "../utils.h"

void raiz()
{
    float a,b,c,x1,x2,rdelta;
    printf("Informe as constantes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    rdelta = sqrtf((pow(b, 2) - 4*a*c));
    x1 = (-b + rdelta)/2*a;
    x2 = (-b - rdelta)/2*a;
    
    printf("\nEq: %.2fx^2 + %.2fx + %.2f  S={%.2f, %.2f}\n\n", a, b, c, x1, x2);
}