#include <stdio.h>
#include <string.h>
#include "headers.h"
#include "utilisable_inputs.h"

int rechercheByID(int id) {
    for (int i = 0; i < AvionCalc; i++) {
        if (flotte[i].id == id) {
            return i;
        }
    }
    return -1;
}

int rechercheByModel(char model[]) {
    for (int i = 0; i < AvionCalc; i++) {
        if (strcmp(flotte[i].modele, model) == 0) {
            return i;
        }
    }
    return -1;
}

void rechercher() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion disponible pour recherche.\n");
        return;
    }

    int choix;
    saisirChoixRechercher(&choix);

    int trouve_indic = -1;
    
    if (choix == 1) {
        int id;
        saisirID(&id);
        trouve_indic = rechercheByID(id);
        
        if (trouve_indic != -1) {
            printf("###### Avion trouve ######\n");
            printf(">> ID Avion: [%03d]\n", flotte[trouve_indic].id);
            printf(">> Modele: %s\n", flotte[trouve_indic].modele);
            printf(">> Capacite: %d passagers\n", flotte[trouve_indic].capacity);
            printf(">> Statut: %s\n", flotte[trouve_indic].statut);
            printf(">> Date d'entree: %s\n", flotte[trouve_indic].Date_Entree);
            printf("------------------------\n");
        } else {
            printf("[!] Aucun avion trouve avec l'ID [%03d].\n", id);
        }
    }
    else if (choix == 2) {
        char modele[30];
        saisirModele(modele);
        trouve_indic = rechercheByModel(modele);
        
        if (trouve_indic != -1) {
            printf("###### Avion trouve ######\n");
            printf(">> ID Avion: [%03d]\n", flotte[trouve_indic].id);
            printf(">> Modele: %s\n", flotte[trouve_indic].modele);
            printf(">> Capacite: %d passagers\n", flotte[trouve_indic].capacity);
            printf(">> Statut: %s\n", flotte[trouve_indic].statut);
            printf(">> Date d'entree: %s\n", flotte[trouve_indic].Date_Entree);
            printf("------------------------\n");
        } else {
            printf("[!] Aucun avion trouve avec le modele [%s].\n", modele);
        }
    }
    else {
        printf("[!] Choix invalide.\n");
    }
}