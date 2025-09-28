#include <stdio.h>
#include "headers.h"

#include "utilisable_inputs.h"

void modifier() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion disponible pour modification.\n");
        return;
    }

    int id;
    saisirID(&id);

    int found = 0;
    for (int i = 0; i < AvionCalc; i++) {
        if (flotte[i].id == id) {
            found = 1;
            printf("Modification de l'avion ID [%03d]\n", id);

            printf("Nouveau modele (actuel: %s): \n", flotte[i].modele);
            saisirModele(flotte[i].modele);

            printf("Nouvelle capacite (actuelle: %d): \n", flotte[i].capacity);
            saisirCapacite(&flotte[i].capacity);

            printf("Nouveau statut (actuel: %s): \n", flotte[i].statut);
            saisirStatut(flotte[i].statut);

            printf("Nouvelle date d'entree (actuelle: %s): \n", flotte[i].Date_Entree);
            saisirDate(flotte[i].Date_Entree);

            printf("Avion modifie avec succes!\n");
            break;
        }
    }

    if (!found) {
        printf("Aucun avion trouve avec l' ID [%03d].\n", id);
    }
}
