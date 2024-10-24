#include "..\utils.h"

void resistor()
{    
    float r1, r2;
    printf("Informe R1: ");
    scanf("%f", &r1);
    
    printf("Informe R2: ");
    scanf("%f", &r2);
    
    float p, s;
    
    s = r1+r2;
    p = r1*r2/(s);

    printf("\nSerie: %.1f\u03A9\nParalelo: %.1f\u03A9\n\n", s, p); 

}