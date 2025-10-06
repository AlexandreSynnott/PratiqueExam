#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	if (argc != 3) {
		fprintf(stderr, "Il manque des arguments\n", argv[0]);
		exit(1);
	}

	FILE *fin = fopen(argv[1], "r");
	if (!fin) {
		fprintf (stderr, "Impossible d'ouvrir le fichier.\n", argv[1]);
		exit(2);
	}

	FILE *fout = fopen(argv[2], "w");
	if (!fout){
		fprintf(stderr, "Impossible de creer le fichier\n", argv[2]);
		fclose(fin);
		exit(2);
	}

	int c;
	int i = 0;
	int found = 0;
	const char *mot = "secret";

	while ((c = fgetc(fin)) != EOF) {
		if (c == mot[i]) {
			i++;
			if (mot[i] == '\0') {
				found = 1;
				break;
			}
		} else {
			i = 0;
		}
	}

	fclose (fin);

	if(found) {
		fprintf(fout, "Le secret a ete trouve\n");
		fclose(fout);
		exit(0);
	} else {
		fclose(fout);
		exit (128);
	}


} 
