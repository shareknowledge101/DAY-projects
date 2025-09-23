#include <stdio.h>
int main()
{
    float x,Result;
    printf("Enter value of x :\n");
    scanf("%f", &x);

    Result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("The result is : %f\n", Result);

    return 0;
}