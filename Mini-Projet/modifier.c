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

    int trouve_indic = rechercheByID(id);
    
    
    if (trouve_indic != -1) {
        printf("Modification de l'avion ID [%03d]\n", id);

        printf("Nouveau modele (actuel: %s): \n", flotte[trouve_indic].modele);
        saisirModele(flotte[trouve_indic].modele);

        printf("Nouvelle capacite (actuelle: %d): \n", flotte[trouve_indic].capacity);
        saisirCapacite(&flotte[trouve_indic].capacity);

        printf("Nouveau statut (actuel: %s): \n", flotte[trouve_indic].statut);
        saisirStatut(flotte[trouve_indic].statut);

        printf("Nouvelle date d'entree (actuelle: %s): \n", flotte[trouve_indic].Date_Entree);
        saisirDate(flotte[trouve_indic].Date_Entree);

        printf("Avion modifie avec succes!\n");
    } else {
        printf("Aucun avion trouve avec l' ID [%03d].\n", id);
    }
}