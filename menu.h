#pragma once
#ifndef MENU_H
#define MENU_H

typedef struct
{
    char *titulo;
    void (*executor)(void* m_origin);
} Pagina;

typedef struct
{
    Pagina *paginas;
    char *titulo;

    unsigned short int u_paginas;
    unsigned short int u_sizepaginas;
    
    bool rodar;
} Menu;

void __executar(Menu *menu, unsigned int pagina);

void criarPagina(Menu *menu, char *titulo, void (*executor)(void* m_origin));
void mostrarMenu(Menu *menu, bool imprimirTitulo);
void limparMenu(Menu* m);

Menu criarMenu(char *title);

#endif