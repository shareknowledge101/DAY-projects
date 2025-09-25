#include <stdio.h>

int main()
{
    long n;
    int digit;
    int calcu[10];
    int i;
    
    while (1)
    {
        printf("Entrez un nombre:");
        scanf("%ld", &n);

        if (n <= 0)
        {
            printf("Programme termine.\n");
            break;
        }

        for (i = 0; i < 10; i++)
        {
            calcu[i] = 0;
        }

        long temp = n;

        while (temp > 0)
        {
            digit = temp % 10;
            calcu[digit]++;
            temp /= 10;
        }

        int has_repeat = 0;
        for (i = 0; i < 10; i++)
        {
            if (calcu[i] > 1)
            {
                has_repeat = 1;
                break;
            }
        }

        if (has_repeat)
        {
            printf("Des chiffres sont repetes:___");
            for (i = 0; i < 10; i++)
            {
                if (calcu[i] > 1)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
        else
        {
            printf("Aucun chiffre repete___0\n");
        }
    }

    return 0;
}
