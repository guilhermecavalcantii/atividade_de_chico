#include <stdio.h>
#include <string.h>

int replace(char *str) {
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
            cont++;
        }
    }
    return cont;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", str);

    int cont = replace(str);

    printf("String resultante: %s\n", str);
    printf("Numero de substituicoes: %d\n", cont);

    return 0;
}
