#include <stdio.h>

int main() {
    int velocidades[100];
    int limites[100] = {30, 40, 50, 60, 70, 80, 90, 100}; 
    int i, j, excedeu20, quarteiroes_excedeu20, multa, valor_final;

    
    for (i = 0; i < 100; i++) {
        printf("Velocidade m�xima no quarteir�o %d (m/s): ", i+1);
        scanf("%d", &velocidades[i]);
    }

    
    excedeu20 = 0;
    valor_final = 0;
    for (i = 0; i < 100; i++) {
        multa = 0;
        for (j = 0; j < 8; j++) {
            if (velocidades[i] > limites[j] * 1.2) {
                if (multa > 0) {
                    multa = multa * 1.5;
                } else {
                    if (velocidades[i] <= limites[j] * 1.3) {
                        multa = 200;
                    } else {
                        multa = 300;
                    }
                }
                break;
            }
        }
        valor_final += multa;
    }

    printf("O valor final devido em multas � de R$ %d.\n", valor_final);

    return 0;
}
