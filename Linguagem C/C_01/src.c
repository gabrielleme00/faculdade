/*	
	Ex. #01
	Ler um vetor de 20 números inteiros
	e imprimir o maior, o menor e a média
*/

#include <stdio.h>

int main() {
	int vetor[20], i, tam,
		maior, menor;
	float media = 0.0f;

	// Calcular o tamanho do vetor.
	tam = (sizeof(vetor) / sizeof(int));

	printf("Insira os %d números do vetor...\n", tam);

	// Inicializar o vetor com o input do usuario.
	for (i = 0; i < tam; i++) {
		printf("vetor[%d]: ", i);
		scanf("%d", &vetor[i]);

		media += vetor[i];

		if (i == 0) {
			maior = vetor[i];
			menor = vetor[i];
		}
		else {
			if (vetor[i] > maior)
				maior = vetor[i];
			if (vetor[i] < menor)
				menor = vetor[i];
		}
	}

	media /= tam;

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Média: %.2f\n", media);

	return 0;
}