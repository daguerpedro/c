#include "../utils.h"

void imparpar()
{
    int num;

    do
    {
        printf("Digite um número ou 0 para sair: ");
        num = (scanf("%d", &num)) == 0 ? 0 : num;

        printf("O numero é %s\n", (num % 2) ? "ímpar" : "par");
    } while (num != 0);
    printf("\n");
}