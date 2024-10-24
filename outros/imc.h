#include "../utils.h"

void imc()
{
    char sexo;

    printf("Digite o sexo (m)asculino/(f)eminino: ");
    sexo = tolower(getchar());

    if(sexo != 'm' && sexo != 'f')
    {
        printf("Sexo inválido!\n");
        return;
    }

    float altura;
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    int peso = (sexo == 'm') ? ((72.7 * altura)-58) : ((62.1 * altura) -44.7);
    printf("Para %.2fm o peso ideal é %dkg\n\n", altura, peso);
}