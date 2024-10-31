#include "menu.h"
#include "utils.h"

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
#include "outros/alunos.h"
#include "outros/imparpar.h"
#include "outros/acumulador.h"
#include "outros/resistores.h"

Menu m_principal, m_calculos, m_conversoes, m_outros;

void cls() { system("cls"); }

void sair(void *m_origin)
{
    cls();
    ((Menu *)m_origin)->rodar = false;
}

void iniciarConversoes()
{
    m_conversoes = criarMenu("Conversões");
    criarPagina(&m_conversoes, "Voltar", *sair);
    criarPagina(&m_conversoes, "Pegar código ASCII", *lerASCII);
    criarPagina(&m_conversoes, "Conversão horas -> minutos", *hora_min);
    criarPagina(&m_conversoes, "Conversão minúsculo > maiúsculo", *maiuscminusc);
}

void iniciarCalculos()
{
    m_calculos = criarMenu("Cálculo");
    criarPagina(&m_calculos, "Voltar", *sair);
    criarPagina(&m_calculos, "Calcular resistor", &resistor);
    criarPagina(&m_calculos, "Calcular resistores paralelo", &resistores);
    criarPagina(&m_calculos, "Formula de bhaskara", &raiz);
    criarPagina(&m_calculos, "Formula de bhaskara complexos", &bhaskara);
    criarPagina(&m_calculos, "Retangular para polar", &complexo);
    criarPagina(&m_calculos, "Polar para retangular", &complexo2);
    criarPagina(&m_calculos, "Calcular hipotenusa", &hipotenusa);
    criarPagina(&m_calculos, "Calculadora prestação", &prestacao);
    criarPagina(&m_calculos, "Área cilindro (Texto formatado)", *areacilindro);
}

void iniciarOutros()
{
    m_outros = criarMenu("Outros");
    criarPagina(&m_outros, "Voltar", *sair);
    criarPagina(&m_outros, "Impar/Par", *imparpar);
    criarPagina(&m_outros, "Acumulador", *acumulador);
    criarPagina(&m_outros, "Peso ideal", *imc);
    criarPagina(&m_outros, "Dias do mês", *diasmes);
    criarPagina(&m_outros, "Tempo de treinamento", *treinamento);
    criarPagina(&m_outros, "Comparar strings", *compararStrings);
}

void irCalculos()
{
    cls();
    mostrarMenu(&m_calculos, true);
}

void irConversoes()
{
    cls();
    mostrarMenu(&m_conversoes, true);
}

void irOutros()
{
    cls();
    mostrarMenu(&m_outros, true);
}

void iniciarMPrincipal()
{
    m_principal = criarMenu("Menu principal");
    criarPagina(&m_principal, "Fechar", *sair);
    criarPagina(&m_principal, "Cálculos", *irCalculos);
    criarPagina(&m_principal, "Conversões", *irConversoes);
    criarPagina(&m_principal, "Outros", *irOutros);
    criarPagina(&m_principal, "Limpar tela", *cls);

    iniciarOutros();
    iniciarCalculos();
    iniciarConversoes();

    mostrarMenu(&m_principal, 1);

    limparMenu(&m_principal);
    limparMenu(&m_calculos);
    limparMenu(&m_conversoes);
    limparMenu(&m_outros);
}