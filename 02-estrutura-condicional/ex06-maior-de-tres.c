#include <stdio.h>

int main(void) {
    float a, b, c, maior;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    printf("Maior: %.2f\n", maior);
    return 0;
}