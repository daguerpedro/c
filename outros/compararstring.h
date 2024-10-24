#include "../utils.h"

void compararStrings()
{
    char nome1[20];
    char nome2[20];

    printf("Digite um nome: ");
    fgets(nome1, length(nome1), stdin);
    nome1[(int)strcspn(nome1, "\n")] = '\0';

    printf("Digite outro nome: ");
    fgets(nome2, length(nome2), stdin);
    nome2[(int)strcspn(nome2, "\n")] = '\0';

    char *iguais;
    if (strcmp(nome1, nome2) != 0)
        iguais = "não são";
    else
        iguais = "são";

    printf("\nOs nomes %s iguais!\n\n", iguais);
}