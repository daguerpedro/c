#include "../utils.h"

void maiuscminusc()
{
    char texto[255];

    printf("Digite algo: ");
    fgets(texto, length(texto), stdin);
    texto[(int)strcspn(texto, "\n")] = '\0';

    for(int i = 0; i < length(texto); i++)
        texto[i] = toupper(texto[i]);

    printf("%s\n\n", texto);
}