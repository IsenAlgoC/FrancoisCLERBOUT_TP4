#include <stdlib.h>
#include <stdio.h>


int main() {
	char phrase[50];
	int nombre_zero = 0;
	int position;
	float longueur_tot;
	int mot = 1;
	float moyenne;

	printf("Entrez une phrase : ");
	gets(phrase);

	printf("\nVous avez entre : %s", phrase);
	
	for (position = 0; position < strlen(phrase) ; position++) {
		if (phrase[position] == ' ') {
			nombre_zero++;
			mot++;
		}
	}


	longueur_tot = strlen(phrase) - nombre_zero;
	moyenne = longueur_tot / mot;

	printf("\nLe nombre de caracteres que vous avez rentre est : %d", strlen(phrase)-nombre_zero);
	printf("\nIl y a %d mots dans votre phrase.", mot);
	printf("\nLa moyenne de caracteres par mot est de : %f", moyenne);


	return(EXIT_SUCCESS);
}