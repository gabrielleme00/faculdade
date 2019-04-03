#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno aluno;

struct aluno {
	char  nome[30];
	float media;
	int   faltas;
};

void criarAluno(aluno* a, int i) {
	printf("Nome do aluno %d:   ", i);
        scanf("%s", &a->nome);
        printf("Media do aluno %d:  ", i);
        scanf("%f", &a->media);
        printf("Faltas do aluno %d: ", i);
        scanf("%d", &a->faltas);
	
	printf("\n");
}

void infoAluno(aluno* a) {
	printf("Nome:   %s\n",   a->nome);
	printf("Media:  %.2f\n", a->media);
	printf("Faltas: %d\n\n", a->faltas);
}

int main() {
	aluno* a1;
	aluno* a2;

	// Alocar memoria para os alunos
	a1 = (aluno*) malloc(sizeof(aluno));
	a2 = (aluno*) malloc(sizeof(aluno));

	// Ler informacoes dos alunos
	criarAluno(a1, 1);
	criarAluno(a2, 2);

	// Exibir info por ordem alfabetica dos nomes
	// Se o resultado for menor que zero, a primeira string tem menor valor
	// na tabela ASCII -- ou seja, tem maior precedencia no alfabeto
	if (strcmp(a1->nome, a2->nome) < 0) {
		infoAluno(a1);
		infoAluno(a2);
	} else {
		infoAluno(a2);
		infoAluno(a1);
	}

	free(a1);
	free(a2);

	return 0;
}
