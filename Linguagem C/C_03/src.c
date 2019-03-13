/*
	Ex #03
	Imprimir um triângulo de Pascal
	armazenado como uma matriz de
	tamanho N, onde: Min < N < Max.
*/

#include <stdio.h>

const int Min = 1;
const int Max = 20;

int main() {
	unsigned int pascal[Max][Max], i, j;
	int n;

	// Input
	printf("Digite um numero entre %d e %d: ", Min, Max);
	scanf("%d", &n);

	// Verificar o input
	if (n < Min)
		n = Min;
	else if (n > Max)
		n = Max;

	// Preencher a matriz
	for (i = 0; i < n; i++) {
		for (j = 0; j < i+1; j++) {
			if (i == 0|| j == 0 || i == j)
				pascal[i][j] = 1;
			else
				pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
		}
	}

	// Imprimir a matriz
	for (i = 0; i < n; i++) {
		for (j = 0; j < i+1; j++) {
			if (j == 0)
				printf("1");
			else
				printf("%6d", pascal[i][j]);
		}
		printf("\n");
	}

	return 0;
}