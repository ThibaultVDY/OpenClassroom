#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int age = 0;
    float poids = 0;
    int anneeNaissance = 0;

    printf("Veuillez entrer votre age :\n");
    scanf_s("%d", &age);

    anneeNaissance = 2023 - age;

    printf("Veuillez entrer votre poids :\n");
    scanf_s("%f", &poids);
    printf("Vous avez %d ans et vous faites %f kg\n", age, poids);
    printf("Vous etes ne en %d", anneeNaissance);


    return 0;
}