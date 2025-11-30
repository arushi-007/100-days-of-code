#include <stdio.h>
#include <string.h>
int main(void) {
    char line[256];
    printf("Enter full name: ");
    fgets(line, sizeof line, stdin);
    line[strcspn(line, "\n")] = '\0';        
    char *words[32];
    int n = 0;
    char *tok = strtok(line, " ");
    while (tok && n < 32) {
        words[n++] = tok;
        tok = strtok(NULL, " ");
    }

    if (n == 0) return 0;              
    for (int i = 0; i < n - 1; ++i)
        printf("%c.", words[i][0]);
    printf(" %s\n", words[n - 1]);
    return 0;
}
