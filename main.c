#include "utils.h"
#include "menu.h"

#include "outros/complexo.h"
#include "outros/complexo2.h"
#include "outros/hipotenusa.h"
#include "outros/prestacao.h"
#include "outros/raiz.h"
#include "outros/resistor.h"
#include "outros/ascii.h"
#include "outros/compararstring.h"
#include "outros/areacilindro.h"
#include "outros/conversaotempo.h"
#include "outros/minusculomaiuculo.h"
#include "outros/bhaskaracomplexa.h"
#include "outros/treinamento.h"
#include "outros/diasmes.h"
#include "outros/imc.h"

void sair()
{
    rodar = 0;
}

void cls()
{
    system("cls");
}

int main()
{
    UTF();

    Menu menu = criarMenu("[PROGRAMAS AULA DO VILLAÇA]");

    criarPagina(&menu, "Fechar", *sair);

    criarPagina(&menu, "Peso ideal", *imc);
    criarPagina(&menu, "Dias do mês", *diasmes);
    criarPagina(&menu, "Tempo de treinamento", *treinamento);
    criarPagina(&menu, "Conversão horas -> minutos", *hora_min);
    criarPagina(&menu, "Conversão minúsculo > maiúsculo", *maiuscminusc);

    criarPagina(&menu, "Calcular resistor", &resistor);
    criarPagina(&menu, "Formula de bhaskara", &raiz);
    criarPagina(&menu, "Formula de bhaskara complexos", &bhaskara);
    criarPagina(&menu, "Retangular para polar", &complexo);
    criarPagina(&menu, "Polar para retangular", &complexo2);

    criarPagina(&menu, "Calcular hipotenusa", &hipotenusa);
    criarPagina(&menu, "Calculadora prestação", &prestacao);
    criarPagina(&menu, "Área cilindro (Texto formatado)", *areacilindro);

    criarPagina(&menu, "Pegar código ASCII", *lerASCII);
    criarPagina(&menu, "Comparar strings", *compararStrings);
    
    criarPagina(&menu, "Limpar tela", *cls);
   
    mostrarMenu(&menu, 1);
}