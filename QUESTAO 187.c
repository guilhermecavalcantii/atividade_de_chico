#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

int main() {               // LETRA A)
    char name[MAX_NAME_LENGTH];

    printf("Digite seu nome: ");
    scanf("%s", name);

    printf("Seu nome �: %s\n", name);

    return 0;
} 
#include <stdio.h>

void mostrar_nome_referencia(char nome_completo[]) {  // LETRA B)
    char sobrenome[100];
    char iniciais[100];
    int i, j, tamanho = 0;

   
    for (i = 0; nome_completo[i] != '\0'; i++) {
        if (nome_completo[i] == ' ') {
            j = 0;
            while (nome_completo[i+j+1] != '\0') {
                sobrenome[j] = nome_completo[i+j+1];
                j++;
            }
            sobrenome[j] = '\0';
            break;
        }
    }

    
    i = 0;
    while (nome_completo[i] != '\0') {
        if (nome_completo[i] != ' ' && nome_completo[i-1] == ' ') {
            j = 0;
            while (nome_completo[i+j] != ' ' && nome_completo[i+j] != '\0') {
                j++;
            }
            if (j > 2) {
                tamanho += j - 2;
            }
        }
        i++;
    }

    
    i = 0;
    j = 0;
    while (nome_completo[i] != '\0') {
        if (nome_completo[i] != ' ' && nome_completo[i-1] == ' ') {
            if (nome_completo[i] >= 'a' && nome_completo[i] <= 'z') {
                iniciais[j] = nome_completo[i] - 'a' + 'A';
            } else {
                iniciais[j] = nome_completo[i];
            }
            j++;
            while (nome_completo[i+j] != ' ' && nome_completo[i+j] != '\0') {
                j++;
            }
            if (j > 2) {
                iniciais[j-1] = '.';
            } else {
                j--;
            }
            iniciais[j] = ' ';
            j++;
        }
        i++;
    }
    iniciais[tamanho] = '\0';  

   
    printf("%s, %s\n", sobrenome, iniciais);
}

int main() {
    char nome_completo[100];

    printf("Digite o nome completo: ");
    scanf("%[^\n]s", nome_completo);

    mostrar_nome_referencia(nome_completo);

    return 0;
} 
