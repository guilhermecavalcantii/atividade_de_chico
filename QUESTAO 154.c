#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int array[ARRAY_SIZE];
    int *p = array; // ponteiro para o in�cio do array

    // Lendo os valores do array
    printf("Digite %d valores inteiros:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", p + i); // lendo o valor e armazenando na posi��o i do array
    }

    // Imprimindo o dobro de cada valor do array
    printf("O dobro dos valores lidos �:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", *(p + i) * 2); // imprimindo o dobro do valor na posi��o i do array
    }
    printf("\n");

    return 0;
}
