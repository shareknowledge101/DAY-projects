#include <stdio.h>
#include <ctype.h>

int main() {
    char mot[100];
    int score = 0;
    
    printf("Entrez un mot : ");
    scanf("%s", mot);
    


    for (int i = 0; mot[i] != '\0'; i++) {
        char lettre = toupper(mot[i]);
        
        switch (lettre) {
            case 'A': case 'E': case 'I': case 'L': case 'N': 
            case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
        }
    }
    
    printf("Valeur scrabble : %d \n", score);
    return 0;
}