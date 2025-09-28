#include <stdio.h>
#include "headers.h"
#include "utilisable_inputs.h"


void supprimer() {
    if (AvionCalc == 0) {
        printf("[!] Aucune entree d'avion disponible pour suppression.\n");
        return;
    }

    int id;
    saisirID(&id);

    int found = 0;
    for (int i = 0; i < AvionCalc; i++) {
        if (flotte[i].id == id) {
            found = 1;
            for (int j = i; j < AvionCalc - 1; j++) {
                flotte[j] = flotte[j + 1];
            }
            AvionCalc--;
            printf("[i] Avion avec ID [%03d] supprime avec succes!\n", id);
            break;
        }
    }

    if (!found) {
        printf("[!] Aucun avion trouve avec l'ID [%03d].\n", id);
    }
}