#include <stdio.h>

int main (void) {
    float nota1, nota2, nota3,  media;                 // declaracao de variaveis

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das notas e: %.2f\n", media);
    return 0;
}