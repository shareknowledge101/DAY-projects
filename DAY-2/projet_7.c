#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez un nombre n : ");
    scanf("%d", &n);
    
    printf("Carres pairs entre 1 et %d :\n", n);
    
    for (int i = 1; i * i <= n; i++) {
        int carre = i * i;
        
        if (carre % 2 == 0) {
            printf("%d\n", carre);
        }
    }
    
    return 0;
}