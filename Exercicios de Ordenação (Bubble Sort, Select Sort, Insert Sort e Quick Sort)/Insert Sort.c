#include <stdio.h>

void insertSort(int *vetor, int n) {
  int aux, i, j;
  
  for (i = 1; i < n; i++) {
    aux = vetor[i];
    for (j = i - 1; (j >= 0) && (aux < vetor[j]); j--) {
		vetor[j + 1] = vetor[j];
	}
	
	vetor[j + 1] = aux;
  }
}

int main() {
	int i;
	int N = 10;
	int V[10] = {5,4,3,2,1,9,8,7,6,0};
	
	insertSort(V, N);
	
	for (i = 0; i < 10; i++) {
		printf("%d\n", V[i]);
	}
	
	return 0;
}
