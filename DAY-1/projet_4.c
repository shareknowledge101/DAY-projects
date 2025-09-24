#include <stdio.h>

int main()
{
    float percentage,hund,income,revenue;
    
    printf("\nEnter your amount :\n");

    scanf("%f", &income);

    revenue =  income * 5 / 100;

    printf("\nyour revenue now is :%f\n", revenue+income);

    return 0;
}