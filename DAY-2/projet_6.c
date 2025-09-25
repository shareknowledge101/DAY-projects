#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);
    
    while (b != 0) {
        temp = b;

        b = a % b;

        a = temp;
    }
    
    printf("Le plus grand commun diviseur est : %d\n", a);

    return 0;
}
