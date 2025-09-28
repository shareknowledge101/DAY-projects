#include <stdio.h>
#include "headers.h"

void afficher() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion disponible.!!\n");
        return;
    }

    printf("(---###### Liste des avions ######---)\n");
    for (int i = 0; i < AvionCalc; i++) {
        printf("ID Avion: %d\n", flotte[i].id);
        printf("Modele: %s\n", flotte[i].modele);
        printf("Capacite: %d passagers\n", flotte[i].capacity);
        printf("Statut: %s\n", flotte[i].statut);
        printf("Date d'entree: %s\n", flotte[i].Date_Entree);
        printf("---------------------------\n");
    }
}