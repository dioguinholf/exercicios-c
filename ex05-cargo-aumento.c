#include <stdio.h>

int main(void) {
    int codigo;
    float salario, percentual, aumento, novoSalario;

    printf("Digite o codigo do cargo (1 a 5): ");
    scanf("%d", &codigo);
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (codigo) {
        case 1: printf("Cargo: Escriturario\n"); percentual = 50; break;
        case 2: printf("Cargo: Secretario\n");   percentual = 35; break;
        case 3: printf("Cargo: Caixa\n");        percentual = 20; break;
        case 4: printf("Cargo: Gerente\n");      percentual = 10; break;
        case 5: printf("Cargo: Diretor\n");      percentual = 0;  break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    aumento = salario * percentual / 100;
    novoSalario = salario + aumento;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0;
}