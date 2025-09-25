#include <stdio.h>

int main()
{
    int numb ;

    printf("\nEnter a number : ");

    scanf("%d", &numb );

    
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
    
    }

    else if (numb  > 100) {
        printf("\nnumb er exceeded the range by +100");
    }
    
    

    
    return 0;
}