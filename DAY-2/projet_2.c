#include <stdio.h>


int main(){

    char real[2];

    printf("\nEnter 2 digits ");

    scanf("\n%s", &real);

    printf("\nReverse number : %c%c\n", real[1], real[0]);

    return 0;

}