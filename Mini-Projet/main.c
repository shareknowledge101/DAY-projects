#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main() {
    int choix;

    do {
        printf("\n####### Menu Gestion Flotte #######\n");
        printf("1) Ajouter un avion\n");
        printf("2) Afficher tous les avions\n");
        printf("3) Modifier un avion\n");
        printf("4) Supprimer un avion\n");
        printf("5) Rechercher un avion\n");
        printf("6) Trier les avions\n");
        printf("7) Quitter\n");
        printf("Votre choix >>>>");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");
                break;
            case 2:
                afficher();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");
                break;
            case 3:
                modifier();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");

                break;
            case 4:
                supprimer();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");

                break;
            case 5:
                rechercher();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");

                break;
            case 6:
                trier();
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");

                break;
            case 7:
                printf("Au revoir!\n");
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");

                break;
            default:
                printf("\nAppuyez sur Entree pour continuer...");
                getchar(); getchar();
                system("clear");
                printf("[!] Choix invalide!\n");
        }
    } while (choix != 7);

    return 0;
}