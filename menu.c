#include "./utils.h"
#include "./menu.h"

void criarPagina(Menu *menu, char *titulo, void (*executor)(void*m_origin))
{
    Pagina p = {titulo, executor};
    menu->paginas[menu->u_paginas] = p;
    menu->u_paginas++;

    if (menu->u_paginas >= menu->u_sizepaginas)
    {
        menu->u_sizepaginas *= 2;

        Pagina *temp = realloc(menu->paginas, menu->u_sizepaginas * sizeof(Pagina));

        if (temp == NULL)
        {
            printf("Erro de realocação\n");
            free(menu->paginas);
            abort();
        }

        menu->paginas = temp;
    }
}

void __executar(Menu *menu, unsigned int pagina)
{
    if (menu)
        if (pagina < menu->u_paginas)
            if (&menu->paginas[pagina])
                if (*menu->paginas[pagina].executor)
                    (*menu->paginas[pagina].executor)(menu);
}

void limparMenu(Menu* m)
{
    free(m->paginas);
}

void mostrarMenu(Menu *menu, bool imprimirTitulo)
{
    menu->rodar = true;
    while (menu->rodar == 1)
    {
        fflush(stdout);

        if (!menu)
            return;

        if (imprimirTitulo)
            printf("> %s\n\n", menu->titulo);

        SetConsoleTitle(menu->titulo);

        for (int i = 0; i < menu->u_paginas; i++)
        {
            Pagina p = menu->paginas[i];
            printf("(%d) %s\n", i, p.titulo);
        }

        printf("\nDigite o número da página desejada: ");

        char input[255]; // Um buffer para segurar dados de entrada
        char *endptr;    // Um caractere temporário

        fflush(stdin);            // Evitar leituras errôneas devido a dados perdidos
        fgets(input, 255, stdin); // Le a entrada
        input[(int)strcspn(input, "\n")] = '\0';

        unsigned int option = strtoul(input, &endptr, 10);                            // String to Long
        boolean valid = (endptr != input) && option < menu->u_paginas && option >= 0; // Verifica se o número digitado foi convertido corretamente, e se é >= 0

        while (!valid) // Permite recolher entradas novamente
        {
            printf("\nDigite uma opção válida: ");

            fgets(input, 255, stdin);
            input[(int)strcspn(input, "\n")] = '\0';

            option = strtol(input, &endptr, 10);
            valid = (endptr != input) && option < menu->u_paginas;
        }

        printf("\n");

        SetConsoleTitle(menu->paginas[option].titulo);
        __executar(menu, option);
    }
}

Menu criarMenu(char *title)
{
    // Inicializa o menu, alocando uma "lista" com memória suficiente para alocar 10 páginas.
    Menu m = {malloc(10 * sizeof(Pagina)), title, 0, 10, true};
    return m;
}