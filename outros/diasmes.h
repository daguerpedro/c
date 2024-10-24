#include "../utils.h"

void diasmes()
{
    int mes;
    printf("Digite um mês (1-12): ");
    scanf("%d", &mes);

    int dias;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        dias = 31;

    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dias = 30;
    
    else if(mes == 2)
    {
        int ano;

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if(ano % 400 == 0 || ano % 4 == 0 && ano%100 != 0) // é bisexto
            dias = 29;
        else
            dias = 28;
    }
    else
    {
        printf("Mês inválido!\n");
        return;
    }
    printf("O mês %d tem %d dias\n\n", mes, dias);
}