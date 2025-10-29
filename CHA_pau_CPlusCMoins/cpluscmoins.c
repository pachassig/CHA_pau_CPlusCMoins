#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	srand(time(NULL));
	/*
	Demande si le joueur veut un nombre d'essais limité.
	*/
	char limite;
	printf("Voulez-vous un nombre d'essais limite ? (O / N)\n");
	scanf("%c", &limite);
	printf("%c\n", limite);
	int nombre_essais = 1;
	if (limite == 'O' || limite == 'o') {
		printf("Combien d'essais voulez-vous ?");
		scanf("%d", &nombre_essais);
	}

	int borne = 0;
	printf("Jusqu'a quel nombre veux-tu que je choisisse ?");
	scanf("%d", &borne);
	int a_trouver = rand() % borne + 1;
	int nombre_choisi = -1;
	printf("J'ai choisi un nombre. Essaie de le trouver !\n");
	int essais = 0;
	while (a_trouver != nombre_choisi && nombre_essais > 0) {
		printf("Choisis un nombre : ");
		scanf("%d", &nombre_choisi);
		if (limite == 'O' || limite == 'o') {
			nombre_essais -= 1;
		}
		essais += 1;
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
	if (nombre_essais == 0) {
		printf("Dommage ! Mon nombre etait %d !\n", a_trouver);
	}
	else {
		printf("Bravo ! Mon nombre etait bien %d !\n", a_trouver);
		printf("Tu l'as trouve en %d essais !", essais);
	}
	return 0;
}

