#include "../utils.h"

void complexo()
{
    float parte_real, parte_imaginaria;
    printf("Informe a parte real: ");
    scanf("%f", &parte_real);
    
    printf("Informe a parte imaginaria: ");
    scanf("%f", &parte_imaginaria);
    
    float modulo = hypotf(parte_real, parte_imaginaria);
    float phi = atan2f(parte_imaginaria, parte_real)*180/M_PI;

    printf("\n%.f + %.fi\n", parte_real, parte_imaginaria);
    printf("%.f\u2220%.f°\n\n", modulo, phi);
}