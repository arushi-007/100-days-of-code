#include <stdio.h>
#include <string.h>

int main(void) {
    char line[256];
    printf("Enter a sentence: ");
    fgets(line, sizeof line, stdin);       
    line[strcspn(line, "\n")] = '\0';

    char *longest = "", *curr = strtok(line, " ");
    int maxLen = 0;

    while (curr) {
        int len = strlen(curr);
        if (len > maxLen) {
            maxLen = len;
            longest = curr;
        }
        curr = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
