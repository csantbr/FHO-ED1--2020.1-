#include <stdio.h>

void selectSort(int * vetor, int n) {
  int menor, aux, i, j;
  for (i = 0; i < n - 1; i++) {
    menor = i;
    for (j = i + 1; j < n; j++) {
      if (vetor[j] < vetor[menor])
        menor = j;
	}
	
    if (menor != i) {
      aux = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = aux;
    }
  }
}

int main() {
	int i;
	int N = 10;
	int V[10] = {0,4,2,3,5,1,7,8,6,9};
	
	selectSort(V, N);
	
	for (i = 0; i < 10; i++) {
		printf("%d\n", V[i]);
	}
	
	return 0;
}
