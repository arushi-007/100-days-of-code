#include <stdio.h>
#include <string.h>
void rev(char *l, char *r) {
    while (l < r) {
        char t = *l;
        *l++ = *r;
        *r-- = t;
    }
}

int main(void) {
    char line[256];
    printf("Enter a sentence: ");
    fgets(line, sizeof line, stdin);
    line[strcspn(line, "\n")] = '\0';     
    char *word = strtok(line, " ");
    while (word) {
        rev(word, word + strlen(word) - 1);
        word = strtok(NULL, " ");
    }

    printf("Result: %s\n", line);
    return 0;
}
