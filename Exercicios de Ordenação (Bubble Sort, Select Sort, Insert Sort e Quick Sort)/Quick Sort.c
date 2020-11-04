#include <stdio.h> 

void quickSort(int *vetor, int left, int right) {
	int i, j, pivo, aux;

	pivo = vetor[right];
	
	i = left;
	j = right;
	
	while(i <= j) {
		while((vetor[i] < pivo) && (i < right)) { i++; }
		while((vetor[j] > pivo) && (j > left)) { j--; }
		
		if(i <= j) {
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
		
		if(j > left) {
			quickSort(vetor, left, j);
		} 
		
		if(i < right) {
			quickSort(vetor, i, right);	
		} 
	}
}

int main() {
	int i;
	int N = 10;
	int V[10] = {55, 22, 88, 99, 33, 77, 11, 66, 100, 44};
	
	quickSort(V, 0, 9);
	for (i = 0; i < 10; i++) {
		printf("%d\n", V[i]);
	}
	
	return 0;
}