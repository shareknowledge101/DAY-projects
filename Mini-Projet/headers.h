#ifndef HEADERS_H
#define HEADERS_H

#define Max_Avion 60

typedef struct {
    int id;
    char modele[30];
    int capacity;
    char statut[25];
    char Date_Entree[11];
} Avion;

void ajouter();
void afficher();
void modifier();
void supprimer();
void rechercher();
void trier();
int comparerDates(const char *d1, const char *d2);

// Add these search function declarations
int rechercheByID(int id);
int rechercheByModel(char model[]);

extern Avion flotte[];
extern int AvionCalc;

#endif