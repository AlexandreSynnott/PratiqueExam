#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 5;
	int *tab = (int*)malloc(n * sizeof(int));

	if(tab == NULL){
		printf("Erreur d'allocation.\n");
		return 1;
	}

	for (int i = 0; i < n; i++){
		tab[i] = (i + 1) * 10;
	}

	printf("Tableau : ");
	for (int i = 0; i < n; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");

	free(tab);

	tab = NULL;

	return 0;
}
