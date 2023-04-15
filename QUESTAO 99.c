#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, numero;
    
    for (i = 0; i < 10; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);
        
        for (j = 0; j < i; j++) {
            if (numero == numeros[j]) {
                printf("Este n�mero j� foi digitado. Digite outro n�mero.\n");
                i--;
                break;
            }
        }
        
        if (j == i) {
            numeros[i] = numero;
        }
    }
    
    printf("O vetor final �: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    
    return 0;
}
