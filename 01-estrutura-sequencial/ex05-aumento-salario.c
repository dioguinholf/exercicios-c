#include <stdio.h>

int main(void) {
    float salario, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    novoSalario = salario + salario * 0.25f; // 25% = 0.25

    printf("O novo salario e: %.2f\n", novoSalario);
    return 0;
}