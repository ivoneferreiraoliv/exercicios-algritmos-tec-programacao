#include <stdio.h>

int main() {
    // 1. Definir uma constante para a taxa de juros anual
    const float TAXA_JUROS = 0.05;

    // 2. Declarando variáveis
    float valor_inicial, valor_final;
    int anos;

    // 3. Entrada do user
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);

    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    // 4. Calcula o valor final (juros simples)
    valor_final = valor_inicial * (1 + (TAXA_JUROS * anos));

    // 5. Exibindo o resultado do investimento
    printf("Valor final do investimento apos %d anos: %.2f\n\n", anos, valor_final);

    // 6. Vetor e Matriz
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // 7. Ponteiro para modificar o primeiro elemento do vetor
    int *ptr = &vetor[0];
    *ptr = 99; // altera o primeiro elemento para 99

    // 8. Exibindo valores e endereços de memória
    printf("Valores do vetor:\n");
    for (int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d, endereco = %p\n", i, vetor[i], (void*)&vetor[i]);
    }

    printf("\nValores da matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = %d, endereco = %p\n", i, j, matriz[i][j], (void*)&matriz[i][j]);
        }
    }

    return 0;
}
