#include <stdio.h>

void bubbleSort(int *vetor, int n) {
	int i, j, aux, troca = 1;
	
	while(troca) {
		troca = 0;
		
		for (i = 0; i < n-1; i++) {
			if (vetor[i] > vetor[i+1]) {
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				troca = 1;
			}
		}
	}
}

int main() {
	int i;
	int N = 10;
	int V[10] = {9, 7, 8, 5, 6, 4, 2, 3, 1, 0};
	
	bubbleSort(V, N);
	
	for (i = 0; i < 10; i++) {
		printf("%d\n", V[i]);
	}
	
	return 0;
}
