#include <stdio.h>

#define SIZE 5

int main(void) {
    int matrix[SIZE][SIZE];
    int row_sums[SIZE] = {0};
    int col_sums[SIZE] = {0};
    
    printf("Entrez les element du tableau %dx%d :\n", SIZE, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        printf("Entrez la ligne %d : ", i + 1);
        for (int j = 0; j < SIZE; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Erreur de saisi\n");
                return 1;
            }
        }
    }
    
    // Calcul des sommes
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
    }
    
    // Affichage
    printf("Totaux des lignes : ");
    for (int i = 0; i <= SIZE; i++) {
        printf("%d ", row_sums[i]);
    }
    
    printf("\nTotaux des colonnes : ");
    for (int i = 0; i <= SIZE; i++) {
        printf("%d ", col_sums[i]);
    }
    printf("\n");
    
    return 0;
}