#include "../utils.h"

void acumulador()
{
    int acc = 0;
    int num = 0;

    printf("Digite um número para ir somando ou 0 para sair: ");

    do
    {
        num = (scanf("%d", &num)) == 0 ? 0 : num;

        acc += num;

        printf("SOMA: %d\n", acc);

    } while (num != 0);

    printf("\n");
}