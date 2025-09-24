#include <stdio.h>

int main()
{
    int possible_d_heure[] = {480, 583, 679, 767, 840, 945, 1020, 1305};
    int heure, minutes, formula;

    //i add a loop to check input of user

    printf("\nEntrer l'heure de depart : ");

    scanf("%d", &heure);

    printf("\nEntrer minutes de depart : ");
    
    scanf("%d", &minutes);

    formula = (heure * 60) + minutes;

    printf("Your approximate time is : %d\n", formula);

    //

}