#include "../utils.h"

void areacilindro()
{
    double r;
    double h;

    printf("Raio: \n");
    scanf("%lf", &r);

    printf("Altura: ");
    scanf("%lf", &h);

    r = abs(r);
    h = abs(h);

    double a = 2.0 * M_PI * r * (r + h);

    printf("Área: %-12.2lf\n\n", a);
}