#include <stdio.h>
#define N 10

int main()

{

    int a[N], i;
    printf("Entrez %d nombress : ", N);

    for (i = 0; i<N;i++);
        scanf("%d", &a[i]);

    printf("Dans lordre invers : ");

    for (i = N - 1; i >= 0; i--)
        printf(" %d", a[i]);

    printf("\n");

    return 0;

}