#include <stdio.h>

// Declara��o da fun��o que calcula a soma e o produto
void soma_e_produto(int num1, int num2, int* soma, int* produto) {
    *soma = num1 + num2;
    *produto = num1 * num2;
}

int main() {
    int num1, num2, soma, produto;

    // Recebe os n�meros do usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Chama a fun��o para calcular a soma e o produto
    soma_e_produto(num1, num2, &soma, &produto);

    // Mostra se os n�meros s�o iguais
    if (num1 == num2) {
        printf("Os n�meros s�o iguais.\n");
    } else {
        printf("Os n�meros s�o diferentes.\n");
    }

    // Mostra a soma e o produto
    printf("A soma dos n�meros � %d.\n", soma);
    printf("O produto dos n�meros � %d.\n", produto);

    return 0;
}
