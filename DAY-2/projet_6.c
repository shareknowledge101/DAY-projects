#include <stdio.h>

int main() {
    int a, b, temp;// je determin un variable pour comparer les result dans boucle d while

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b); //oiblier lespace entrer pour user
    
    while (b != 0) {
        temp = b;

        b = a % b;

        a = temp;
    }
    
    printf("Le plus grand commun diviseur est : %d\n", a);

    return 0;
}
