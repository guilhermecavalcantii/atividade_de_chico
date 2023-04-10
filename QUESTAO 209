#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cebolinhaString(char *s, char *buffer){

    int i, j, k;
    int len = strlen(s);
    char last = ' ';
    for (i = 0, j = 0; i < len; i++, j++) {
        if (s[i] == 'r' || s[i] == 'R') {
            if (i == len - 1 || s[i+1] == ' ' || s[i+1] == '\t' || s[i+1] == '\n') {
                buffer[j] = s[i];
            } else {
                if (s[i+1] != 'r' && s[i+1] != 'R') {
                    buffer[j] = 'l';
                }
            }
        } else {
            buffer[j] = s[i];
        }
        if (s[i] == 'r' && s[i+1] == 'r') {
            i++;
        }
    }
    buffer[j] = '\0';
}

int main (){


    return 0;
}

