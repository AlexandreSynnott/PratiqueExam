#include <stdio.h>
#include <stdlib.h>

int* creerTableau(int taille){
	int *t = (int*)malloc(taille * sizeof(int));
	if(t == NULL){
		printf("Allocation echouer! \n");
		exit(1);
	}
	return t;
}

void libererTableau(int *t) {
	free(t);
	t = NULL;
}

int main(){
	int n = 8;
	int *tab = creerTableau(n);

	for (int i = 0; i < n; i++){
		tab[i] = i * 2;
	}

	for (int i = 0; i < n; i++){
		printf("%d \n", tab[i]);
	}

	libererTableau(tab);

	return 0;
}
