#include <stdio.h>

int main() 

{
    float interet,t_annuel,taux_mensuel,pret,solde,paiement;

    printf("Entrez le montant du prêt:");
    scanf("%f", &pret);




    printf("Entrez le taux de interet annuel: ");
    scanf("%f", &t_annuel);


    printf("Entrez votre paiement mensuel:");
    scanf("\n%f", &paiement);

    taux_mensuel = t_annuel / 12 / 100;
    solde = pret;


    //après le premier paiement
    interet = solde * taux_mensuel;
    solde = solde + interet - paiement;
    printf("Solde restant après le premier paiement : %.2f\n", solde);

    //après le deuxieme paiement
    interet = solde * taux_mensuel;
    solde = solde + interet - paiement;
    printf("Solde restant après le deuxième paiement : %.2f\n", solde);

    //après le troisieme paiement
    interet = solde * taux_mensuel;
    solde = solde + interet - paiement;
    printf("Solde restant après le troisième paiement : %.2f\n", solde);

    return 0;
}
