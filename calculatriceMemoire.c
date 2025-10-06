#include <stdio.h>
#include <stdlib.h>

int main () {
	int *a = NULL;
	int *b = NULL;
	char operateur;

	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));

	if (a == NULL || b == NULL){
		printf("Erreur d'alocation de memoire.\n");
		return 1;
	}

	printf("Entrez le premier nombre : ");
	scanf("%d", a);

	printf("Entrez l'operateur (+, -, *, /) : ");
	scanf(" %c", &operateur);

	printf("Entrez le deuxieme nombre : ");
	scanf("%d", b);

	switch(operateur) {
		case '+':
			printf("Resultat : %d\n", *a + *b);
			break;
		case '-':
			printf("Resultat : %d\n", *a - *b);
			break;
		case '*':
			printf("Resultat : %d\n", (*a) * (*b));
			break;
		case '/':
			if (*b != 0)
				printf("Resultat : %f\n", (float)(*a) / (*b));
			else
				printf("Erreur : Division par zero !\n");
			break;
		default:
			printf("Operateur inconnu.\n");
	}

	free(a);
	free(b);

	a = NULL;
	b = NULL;

	return 0;

}
