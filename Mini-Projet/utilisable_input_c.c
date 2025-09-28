#include <stdio.h>
#include "utilisable_inputs.h"

void saisirModele(char *modele) {
    printf("Entrez le modele (ex: Boeing737): ");
    scanf("%s", modele);
}

void saisirCapacite(int *capacite) {
    printf("Entrez la capacite (nombre de passagers): ");
    scanf("%d", capacite);
}

void saisirStatut(char *statut) {
    printf("Entrez le status (disponible, maintenance, en_vol): ");
    scanf("%s", statut);
}

void saisirDate(char *date) {
    printf("Entrez la date d'entree (JJ/MM/AA): ");
    scanf("%s", date);
}

void saisirID(int *id) {
    printf("Entrez l'ID de l'avion: ");
    scanf("%d", id);
}

void saisirChoixTri(int *choix) {
    printf("Comment voulez-vous trier ?\n");
    printf("1) Par ID\n");
    printf("2) Par date d'entree\n");
    printf("3) Par statut\n");
    printf("4) Par capacite\n");
    printf("5) Par modele\n");
    printf("Votre choix est : ");
    scanf("%d", choix);
}

void saisirChoixRechercher(int *choix) {
    printf("Rechercher par :\n");
    printf("1) ID\n");
    printf("2) Modele\n");
    printf("Votre choix : ");
    scanf("%d", choix);
}