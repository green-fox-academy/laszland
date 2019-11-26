#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* s;
    s = calloc(1024, sizeof(char));
    printf("Type a sentence: ");
    scanf("%[^\n]", s);
    realloc(s, strlen(s));

    for (char* c = s; *c != NULL; c++) {
        if (*c == ' '){
            *c = '\n';
        }
    }
    printf("%s", s);
    return 0;
}