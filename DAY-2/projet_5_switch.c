#include <stdio.h>

int main()
{


    int numb;

    printf("\nEnter a number: ");
    scanf("%d", &numb);

    if (numb >= 0 && numb <= 100) {
        switch (numb / 10) {
            case 10:


            case 9:

                printf("Array name: A\n");
                break;

            case 8:

                printf("Array name: B\n");
                break;

            case 7:

                printf("Array name: C\n");
                break;

            case 6:

                printf("Array name: D\n");
                break;

            default:

                printf("Array name: F\n");
                break;
        }
    } else if (numb > 100) {

        printf("\nNumber exceeded the range by +100\n");

    }

    if (numb >= 0 && numb <= 59) {

        printf("Array name: F\n");

    }

    if (numb >= 60 && numb <= 69) {

        printf("Array name: D\n");

    }

    if (numb >= 70 && numb <= 79) {

        printf("Array name: C\n");

    }

    if (numb >= 80 && numb <= 89) {

        printf("Array name: B\n");

    }

    if (numb >= 90 && numb <= 100) {

        printf("Array name: A\n");

    } else if (numb > 100) 
    {
        printf("\nNumber exceeded the range by +100\n");
    }

    return 0;
}
