#pragma once
#ifndef MENU_H
#define MENU_H

char *categorias;

typedef struct
{
    char *titulo;
    void (*executor)();
} Pagina;

typedef struct
{
    Pagina *paginas;
    char *titulo;

    unsigned short int u_paginas;
} Menu;

void __executar(Menu *menu, unsigned int pagina);

void criarPagina(Menu *menu, char* titulo, void (*executor)());
void mostrarMenu(Menu *menu, boolean imprimirTitulo);
Menu criarMenu(char *title);

#endif