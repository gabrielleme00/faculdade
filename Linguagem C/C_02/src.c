/*	
	Ex. #02
	Ler dois vetores (A e B) de 10 números reais
	e escrever outros dois vetores (C e D) de 10
	números reais, tais que:
		C[i] = max(A[i], B[i])
		D[i] = med(A[i], B[i])
*/

#include <stdio.h>

float max(float a, float b) {
	if (a > b)
		return a;
	else
		return b;
}

float med(float a, float b) {
	return ((a + b) / 2);
}

int main() {
	int i;
	float vetA[10], vetB[10],
		  vetC[10], vetD[10];

	printf("Digite os números dos vetores A e B...\n");

	for (i = 0; i < 10; i++) {
		printf("VetorA[%d]: ", i);
		scanf("%f", &vetA[i]);

		printf("VetorB[%d]: ", i);
		scanf("%f", &vetB[i]);

		vetC[i] = max(vetA[i], vetB[i]);
		vetD[i] = med(vetA[i], vetB[i]);
	}

	printf("\nVetorC[i] = max(A[i], B[i]):\n");
	for (i = 0; i < 10; i += 2) {
		printf("C[%d]: %.2f \tC[%d]:%.2f\n",
			i, i+1, vetC[i], vetC[i+1]);
	}

	printf("\nVetorD[i] = med(A[i], B[i]):\n");
	for (i = 0; i < 10; i += 2) {
		printf("D[%d]: %.2f \tD[%d]:%.2f\n",
			i, i+1, vetD[i], vetD[i+1]);
	}

	return 0;
}