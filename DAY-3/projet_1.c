#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    bool digit_repeat[10] = {false};

    int digit1;
    long n, real_n;

    printf("Entrez un nombre : ");

    scanf("%ld", &n);
    real_n = n;


    while (n > 0) 
    
    {
        digit1 = n % 10;
        if (digit_seen[digit1])
            digit_repeat[digit1] = true;
        else
            digit_seen[digit1] = true;
        n /= 10;
    }

    bool scanner_rep = false;
    printf("Chiffres repetes: ");


    for (int i = 0; i < 10; i++)
    {
        if (digit_repeat[i]) {
            printf("%d ", i);
            scanner_rep = true;
        }
    }

    if (!scanner_rep)
        printf("Aucun Chiffre repete");

    printf("\n");
    return 0;
}
