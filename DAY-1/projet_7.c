#include <stdio.h>

int main()
{
    int amount,rst1,rst2,rst3,rst4;

    printf("\nEntrez votre montant d'argent en dollars $:\n");

    scanf("%d", &amount);

    //20 billets
    rst1 = amount / 20;
    rst2 = (amount % 20)/10;
    rst3 = (amount % 10)/5;
    rst4 = (amount % 5)/1;

    printf("\n%d", rst1);

    printf("\n%d", rst2);

    printf("\n%d", rst3);

    printf("\n%d\n",rst4);

    return 0;

}