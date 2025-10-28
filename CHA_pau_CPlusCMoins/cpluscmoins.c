#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a_trouver = rand() % 100 + 1;
	int nombre_choisi = -1;
	printf("J'ai choisi un nombre. Essaie de le trouver !\n");
	while (a_trouver != nombre_choisi) {
		printf("Choisis un nombre : ");
		scanf("%d", &nombre_choisi);
		if (a_trouver < nombre_choisi) {
			printf("C'est moins ! \n");
		}
		else if (a_trouver > nombre_choisi) {
			printf("C'est plus ! \n");
		}
		else {
			break;
		}
	}
	printf("Bravo ! Mon nombre etait bien %d !",a_trouver);
	return 0;
}

