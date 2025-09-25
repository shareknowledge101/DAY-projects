#include <stdio.h>

int main()
{
    long n;
    int digit;
    int count[10] = {0};
    int i;
    printf("Entre un nombre: ");
    scanf("%ld", &n);




    while (n > 0)
    {
        digit = n % 10;   
        count[digit]++;  
        n = n / 10;      
    }

    printf("Chiffres : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n Occurrences: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    printf("\n");
    return 0;
}
