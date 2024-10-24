#include "../utils.h"

void complexo2()
{
    UTF();

    float complex z;
    float m, theta;

    printf("Informe o modulo: ");
    scanf("%f", &m);

    printf("Informe o ângulo: ");
    scanf("%f", &theta);

    z = m * exp(theta*I*M_PI/180);
    //z = m * e ^j*theta
    
    printf("Z = %.2f %+.2fi\n\n", creal(z), cimag(z));
}