#include <stdio.h>

int main (void) {
    float base, altura, area;                 // declaracao de variaveis

    printf("Digite a base e altura: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura) / 2;
    printf("A area do triangulo e: %.2f\n", area);
    return 0;
}