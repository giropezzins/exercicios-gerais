#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    char datanasc[100];
    char curso [100];
    char periodoing[50];
    int conclusao;
    float cra;
};

Aluno** CriaVetorAlunos(int numeroAlunos){
    Aluno a[numeroAlunos];
    return a;
}

Aluno* CriaAluno(char *nome, char *dtNasc, char *cursoUfes, char* periodoIngresso, int percConclusao, float CRA){
    Aluno *a = (Aluno *) calloc(1, sizeof(Aluno));
    
    strcpy(a->nome, nome);
    strcpy(a->datanasc, dtNasc);
    strcpy(a->curso, cursoUfes);
    strcpy(a->periodoing, periodoIngresso);
    a->conclusao = percConclusao;
    a->cra = CRA;

    return a;
}

void LeAlunos(Aluno** vetorAlunos, int numeroAlunos){
    
    char nome[100];
    char datanasc[100];
    char curso [100];
    char periodoing[50];
    int conclusao;
    float cra;

    for(int i; i < numeroAlunos; i++){
        scanf("%[^\n]\n", nome);
        scanf("%[^\n]\n", datanasc);
        scanf("%[^\n]\n", curso);
        scanf("%[^\n]\n", periodoing);
        scanf("%d", &conclusao);
        scanf("%f", &cra);

        vetorAlunos[i] = CriaAluno(nome, datanasc, curso, periodoing, conclusao, cra);

    }
}

void LiberaAlunos(Aluno** alunos, int numeroAlunos){
    for(int i; i < numeroAlunos; i++){
        free(alunos[i]);
    }
    free(alunos);    
}

void SalvaAlunosBinario(Aluno **alunos, char *fileName, int numeroAlunos){
    FILE *arquivo;
    arquivo = fopen(fileName, "wb");

    int bytes = 0;
    int total = 0;

    for(int i; i < numeroAlunos; i++){
        bytes = strlen(alunos[i]->nome);
        
    }
}

void CarregaAlunosBinario(Aluno **alunos, char *fileName);

void ImprimeAlunos(Aluno** alunos, int numeroAlunos);


