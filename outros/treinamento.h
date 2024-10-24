#include "../utils.h"

void treinamento()
{
    char sexo;
    int idade;

    printf("Digite o sexo: (m) Masculino (f) Feminino: ");
    sexo = tolower(getchar());

    if (sexo != 'm' && sexo != 'f')
    {
        printf("Sexo invalido!\n");
        return;
    }

    printf("Digite a idade: ");
    scanf("%d", &idade);

    int tempo;

    tempo = (sexo == 'm') ? ((idade) >= 30 ? 40 : 55) : ((idade) >= 30 ? 35 : 45);

    printf("O tempo de treino deve ser de: %d minutos.\n\n", tempo);
}