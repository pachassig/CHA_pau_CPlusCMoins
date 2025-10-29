#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int borne = 0;
	printf("Jusqu'a quel nombre veux-tu que je choisisse ?");
	scanf("%d", &borne);
	int a_trouver = rand() % borne + 1;
	int nombre_choisi = -1;
	int nombre_essais = 0;
	printf("J'ai choisi un nombre. Essaie de le trouver !\n");
	while (a_trouver != nombre_choisi) {
		printf("Choisis un nombre : ");
		scanf("%d", &nombre_choisi);
		nombre_essais += 1;
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
	printf("Bravo ! Mon nombre etait bien %d !\n",a_trouver);
	printf("Tu l'as trouvé en %d essais !",nombre_essais);
	return 0;
}

