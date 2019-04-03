#include <stdio.h>
#include <stdlib.h>

int main() {
	int  tam = 0, i = 0, soma = 0;
	int* vet = NULL;

	// Previne que o vetor seja menor ou igual a zero
	do {
		printf("O vetor precisa ser maior que zero.\n");
		printf("Tamanho do vetor: ");
		scanf("%d", &tam);
	} while (tam <= 0);

	// Aloca espaço para o vetor e aponta o ponteiro para o seu inicio
	vet = (int*) malloc(tam * sizeof(int));

	// Verificar se a memoria realmente foi alocada
	if (vet == NULL) {
		printf("Erro, memoria nao alocada.");
		exit(0);
	}

	// Atribui um valor para cada elemento do vetor
	printf("Insira os valores do vetor.");
	for (i = 0; i < tam; i++) {
		printf("[%d]: ", i);
		scanf("%d", vet + i);
		
		// Se o numero for ímpar, adicione-o à soma
		if (*(vet + i) % 2 != 0) {
			soma += *(vet + i);
		}
	}

	printf("\nSoma dos numeros impares: %d\n", soma);

	// "Desalocar" a memória
	free(vet);

	return 0;
}
