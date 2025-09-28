#include <stdio.h>
#include "headers.h"
#include "utilisable_inputs.h"



void ajouter() {
    if (AvionCalc >= Max_Avion) {
        printf("[!] La flotte est pleine, impossible d'ajouter les autre avions.\n");
        return;
    }

    Avion Avion_nouveu;
    Avion_nouveu.id = AvionCalc + 1;

    saisirModele(Avion_nouveu.modele);
    saisirCapacite(&Avion_nouveu.capacity);
    saisirStatut(Avion_nouveu.statut);
    saisirDate(Avion_nouveu.Date_Entree);

    flotte[AvionCalc] = Avion_nouveu;
    AvionCalc++;
    printf("[i] Avion ajoute avec succes! ID = [%03d]\n", Avion_nouveu.id);
    getchar();
}