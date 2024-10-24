#include "../utils.h"

void prestacao()
{
    float prestacao, acresc;
    int dias;

    printf("Entre com a prestação: ");
    scanf("%f", &prestacao);

    printf("Entre com os dias em atraso: ");
    scanf("%d", &dias);
    
    acresc = prestacao*(0.02 + 0.001*dias);

    printf("\nO acrescimo é de R$: %.2f\n\n", acresc);
}

