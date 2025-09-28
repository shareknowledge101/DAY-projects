#include <stdio.h>
#include <string.h>
#include "headers.h"
#include "utilisable_inputs.h"

void rechercher() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion disponible pour recherche.\n");
        return;
    }

    int choix;
    saisirChoixRechercher(&choix);

    int found = 0;
    
    if (choix == 1) {

        
        int id;
        saisirID(&id);
        
        for (int i = 0; i < AvionCalc; i++) {
            if (flotte[i].id == id) {
                found = 1;
                printf("###### Avion trouve ######\n");
                printf(">> ID Avion: [%03d]\n", flotte[i].id);
                printf(">> Modele: %s\n", flotte[i].modele);
                printf(">> Capacite: %d passagers\n", flotte[i].capacity);
                printf(">> Statut: %s\n", flotte[i].statut);
                printf(">> Date d'entree: %s\n", flotte[i].Date_Entree);
                printf("------------------------\n");
                break;
            }
        }
        
        if (!found) {
            printf("[!] Aucun avion trouve avec l'ID [%03d].\n", id);
        }
    }
    else if (choix == 2) {

        char modele[30];
        saisirModele(modele);
        
        for (int i = 0; i < AvionCalc; i++) {
            if (strcmp(flotte[i].modele, modele) == 0) {
                found = 1;
                printf("###### Avion trouve ######\n");
                printf(">> ID Avion: [%03d]\n", flotte[i].id);
                printf(">> Modele: %s\n", flotte[i].modele);
                printf(">> Capacite: %d passagers\n", flotte[i].capacity);
                printf(">> Statut: %s\n", flotte[i].statut);
                printf(">> Date d'entree: %s\n", flotte[i].Date_Entree);
                printf("------------------------\n");
                break;
            }
        }
        
        if (!found) {
            printf("[!] Aucun avion trouve avec le modele [%s].\n", modele);
        }
    }
    else {
        printf("[!] Choix invalide.\n");
    }
}