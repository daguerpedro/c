#include "../utils.h"

void bhaskara()
{
    double a, b, c;
    double complex x1, x2;

    printf("Insira os parâmetros a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = (-b + csqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = -b / a - x1;

    printf("X1: %.2lf %+.2lfi\nX2: %.2lf %+.2lfi\n\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
}