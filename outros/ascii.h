#include "../utils.h"

void lerASCII()
{
    SetConsoleOutputCP(1252); SetConsoleCP(1252);

    printf("Digite um caractere: ");
    unsigned char a = getchar(); fflush(stdin);

    printf("Digite outro caractere: ");
    unsigned char b = getchar(); fflush(stdin);

    printf("%c: %d\n%c: %d\n\n", a, a, b, b);

    UTF();
}