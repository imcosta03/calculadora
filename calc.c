#include <stdio.h>
/*Calculadora na linguagem C 
Usando: 
 -Funções
 -Estrutura de repetiçao (do while)
 -Estruturas de condicinais (if else, switch case)
 Desenvolvido por Izabela Costa
 Manaus-am 05/11/2025
*/

// Função para somar dois números
float soma(float a, float b) {
    return a + b;
}

// Função para subtrair dois números
float subtracao(float a, float b) {
    return a - b;
}

// Função para multiplicar dois números
float multiplicacao(float a, float b) {
    return a * b;
}

// Função para dividir dois números
float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divisao por zero!\n");
        return 0; 
    }
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Menu de opções
        printf("\n=== CALCULADORA EM C ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            // Entrada dos números
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        // Estrutura de decisão para chamar a função correta
        switch (opcao) {
            case 1:
                resultado = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 0:
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
        //Zero encerrar o programa
    } while (opcao != 0);

    return 0;
}
