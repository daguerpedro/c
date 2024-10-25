#include "../utils.h"
/*
    GERENCIADOR DE ALUNOS

    - BANCO DE DADOS
        - SALVAR EM UM ARQUIVO
        - CARREGAR ARQUIVO CASO EXISTA

    - ALUNO
        - MATRICULA
        - NOME
        - IDADE
        - MÉDIA
        - REPROVADO: (MEDIA < 6)
*/

typedef struct
{
    char nome[100];
    short unsigned int idade;
    unsigned long int matricula;
    float media;
    bool reprovado;

} Aluno;

typedef struct
{
    Aluno *listaAlunos;
    unsigned long int alunosRegistrados;
    unsigned long int tamanhoListaAlunos;
} DATABASE;

DATABASE db;

void fechar()
{
    free(db.listaAlunos);
}

void criarDB()
{
    db.alunosRegistrados = 0;
    db.tamanhoListaAlunos = 10;
    db.listaAlunos = malloc(db.tamanhoListaAlunos * sizeof(Aluno));
}

void registrarAluno(Aluno aluno)
{
    db.listaAlunos[db.alunosRegistrados] = aluno;
    db.alunosRegistrados++;

    if(db.alunosRegistrados >= db.tamanhoListaAlunos)
    {
        db.tamanhoListaAlunos *= 2;
        Aluno *temp = realloc(db.listaAlunos, db.tamanhoListaAlunos * sizeof(Aluno));
        if(temp == NULL)
        {
            printf("Erro ao realocar\n");
            fechar();
            exit(-1);
        }

        db.listaAlunos = temp;
    }
}
