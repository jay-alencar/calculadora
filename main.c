#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    while(1) {
        printf("\nSelecione uma operação:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        if(opcao == 0) {
            break;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if(num2 == 0) {
                    printf("Não é possível dividir por zero\n");
                }
                else {
                    resultado = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
            default:
                printf("Opção inválida\n");
        }
    }

    printf("Calculadora encerrada.\n");

    return 0;
}
