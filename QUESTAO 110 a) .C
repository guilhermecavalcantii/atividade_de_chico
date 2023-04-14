#include <stdio.h>

int main() {
    int velocidades[100];
    int limites[100] = {30, 40, 50, 60, 70, 80, 90, 100}; 
    int i, j, excedeu;

    
    for (i = 0; i < 100; i++) {
        printf("Velocidade m�xima no quarteir�o %d (m/s): ", i+1);
        scanf("%d", &velocidades[i]);
    }


    for (i = 0; i < 100; i++) {
        excedeu = 0; 
        for (j = 0; j < 8; j++) {
            if (velocidades[i] > limites[j] * 1.2) {
                excedeu = 1;
                break;
            }
        }
        if (excedeu) {
            printf("O ve�culo excedeu o limite de velocidade no quarteir�o %d.\n", i+1);
        }
    }

    return 0;
}
