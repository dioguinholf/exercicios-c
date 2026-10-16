#include <stdio.h>

#define PI 3.14159f

int main (void) {
    float raio, area;                         // declaracao de variaveis

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;                  // calcula a area do circulo
    printf("A area do circulo e: %.2f\n", area);
    return 0;
}