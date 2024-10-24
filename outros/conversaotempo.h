#include "..\utils.h"

void hora_min()
{
    unsigned int i_horas;
    unsigned int i_minutos;
    unsigned int i_segundos;

    printf("Entre com um tempo no formato 'hora minutos segundos': ");
    scanf("%u %u %u", &i_horas, &i_minutos, &i_segundos);

    unsigned int o_minutos = i_minutos + (i_horas * 60) + (i_segundos / 60);
    printf("O tempo de %02u:%02u:%02u <==> %u minutos\n", i_horas, i_minutos, i_segundos, o_minutos);

    printf("Entre com um tempo em minutos: ");
    scanf("%u", &i_minutos);

    unsigned int o_horas = i_minutos / 60;
    o_minutos = i_minutos % 60;

    printf("O tempo de %02u <==> %02uh %02u min\n\n", i_minutos, o_horas, o_minutos);
}