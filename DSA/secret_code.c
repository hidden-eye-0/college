#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *s_code(char *words) {
    char *code = (char *)malloc(strlen(words) * sizeof(char));
    if (code == NULL) 
        exit(1);
    char *token = strtok(words, " ");
    int index = 0;
    while (token != NULL) {
        code[index++] = token[0];
        token = strtok(NULL, " ");
    }
    code[index] = '\0';
    return code;
}
int main() {
    char name[100];
    printf("Enter a set of words: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    char *code = s_code(name);
    printf("Secret Code: %s\n", code);
    free(code);
}
