#include <stdio.h>
#include <string.h>
int main(void) {
    char line[256];
    printf("Enter full name: ");
    fgets(line, sizeof line, stdin);
    line[strcspn(line, "\n")] = '\0';    
    char *word = strtok(line, " ");
    while (word) {
printf("%c.", word[0]); 
        word = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
