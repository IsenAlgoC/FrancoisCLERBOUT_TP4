#include <stdlib.h>
#include <stdio.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int myTab1[TAILLETAB1];
	int nombre = 1;
	int position = 0;
	//int MyPtr1 = 19;

	for (nombre = 1; nombre <= 20; nombre++) {
		myTab1[position] = nombre;
		position++;
	}

	//Tableau croissant
	position = 0;
	for (position = 0; position < 19; position++) {
		printf("%d%c", myTab1[position], SEPARATEUR);
	}

	printf("%d", myTab1[19]);

	printf("\n\n");

	//Tableau decroissant
	/*while (MyPtr1 > 0) {
		printf("%d%c", myTab1[MyPtr1], SEPARATEUR);
		MyPtr1 += -1;
	}

	printf("%d", myTab1[0]);*/

	int* MyPtr1 = &myTab1[19];

	while (*MyPtr1 > 1) {
		printf("%d%c", *MyPtr1, SEPARATEUR);
		MyPtr1 --;
	}

	printf("%d", myTab1[0]);



	return(EXIT_SUCCESS);
}