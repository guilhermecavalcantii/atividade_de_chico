#include <stdio.h>
#include <stdlib.h>

const int NUM_LINHAS = 5;
const int NUM_COLUNAS = 5;
const int NUM_MAXIMO = 99;


int verificar_repeticao(int cartela[NUM_LINHAS][NUM_COLUNAS], int num) {
    int i, j;

    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            if (cartela[i][j] == num) {
                return 1; 
            }
        }
    }

    return 0; 
}

int main() {
    int cartela[NUM_LINHAS][NUM_COLUNAS] = {{0}}; 
    int num, i, j;

    srand(42); 

    
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            do {
                num = rand() % NUM_MAXIMO + 1; 
            } while (verificar_repeticao(cartela, num));

            cartela[i][j] = num; 
        }
    }

    
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
