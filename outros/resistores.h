#include "../utils.h"

void resistores()
{
    double rp = 0;
    int n = 0;

    bool sair = false;

    do
    {
        printf("Digite o número de resistores: ");
        scanf("%d", &n);
        fflush(stdin);

        for (int i = 0; i < n; i++)
        {
            double r;
            printf("Digite o resistor: ");
            scanf("%lf", &r);
            fflush(stdin);

            if (r == 0)
                break;

            rp += 1 / r;
        }

        printf("O equivalente é: %.1lf\u03A9\n", 1.0 / rp);

        printf("Deseja sair? (S/N): ");
        if (tolower(getchar()) == 's')
            sair = 1;

    } while (!sair);

    printf("\n");
}