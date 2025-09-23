#include <stdio.h>

int main()

{

    // define type of variable used
    float formula,rayon,formula2,Pi=3.14f;


    //ask user to enter desired RAYON
    //
    printf("Enter your desired :\n");


    scanf("%f", &rayon);
    // include formula with F value for 4 and 3
    //
    formula = 4.0f / 3.0f * Pi * rayon*rayon*rayon;
    printf("\na Fractional result :%f\n", formula);


    // include formula with D value for 4 and 3
    //
    formula2 = 4 / 3 * Pi * rayon*rayon*rayon;
    printf("an Integer result :%f\n", formula2);
    
    //Note : when we assign the type of variabls as 4 & 3, formula variable calculate only real numbers so the results will be 3140.000000 otherwise, it will give a float result 4186.666992 as a float variable of 4.0f & 3.0f
    //


    return 0;
}