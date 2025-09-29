#include <stdio.h>
#include "headers.h"
#include "utilisable_inputs.h"
#include <string.h>

int comparerDates(const char *d1, const char *d2) {
    int jour1, mois1, annee1, jour2, mois2, annee2;
    sscanf(d1, "%d/%d/%d", &jour1, &mois1, &annee1);
    sscanf(d2, "%d/%d/%d", &jour2, &mois2, &annee2);

    if (annee1 != annee2) return annee2 - annee1;
    if (mois1 != mois2) return mois2 - mois1;
    return jour2 - jour1;
}

void trier() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion a trier.\n");
        return;
    }


    
    int choix;
    saisirChoixTri(&choix);

    for (int i = 0; i < AvionCalc - 1; i++) {
        for (int j = 0; j < AvionCalc - i - 1; j++) {
            int echang = 0;

            if (choix == 1 && flotte[j].id > flotte[j + 1].id) {
                echang = 1;
            } 
            else if (choix == 2 && comparerDates(flotte[j].Date_Entree, flotte[j + 1].Date_Entree) > 0) {
                echang = 1;
            }
            else if (choix == 3 && strcmp(flotte[j].statut, flotte[j + 1].statut) > 0) {
                echang = 1;
            }
            else if (choix == 4 && flotte[j].capacity > flotte[j + 1].capacity) {
                echang = 1;
            }
            else if (choix == 5 && strcmp(flotte[j].modele, flotte[j + 1].modele) > 0) {
                echang = 1;
            }

            if (echang) {
                Avion temp = flotte[j];
                flotte[j] = flotte[j + 1];
                flotte[j + 1] = temp;
            }
        }
    }

    printf("[i] Tri succes\n");
    afficher();
}