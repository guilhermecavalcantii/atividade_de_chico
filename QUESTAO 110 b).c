#include <stdio.h>

int main() {
    int velocidades[100];
    int limites[100] = {30, 40, 50, 60, 70, 80, 90, 100}; 
    int i, j, excedeu20, quarteiroes_excedeu20;

    
    for (i = 0; i < 100; i++) {
        printf("Velocidade m�xima no quarteir�o %d (m/s): ", i+1);
        scanf("%d", &velocidades[i]);
    }

    
    excedeu20 = 0;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 8; j++) {
            if (velocidades[i] > limites[j] * 1.2) {
                excedeu20++;
                break;
            }
        }
    }
    quarteiroes_excedeu20 = excedeu20 / 8;

    printf("O ve�culo excedeu o limite de velocidade acima de 20%% em %d quarteir�es.\n", quarteiroes_excedeu20);

    return 0;
}
