#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a line: ");
    fgets(s, sizeof s, stdin);         
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i)
        if (s[i] == ' ')
            s[i] = '-';
    printf("Result: %s", s);
    return 0;
}
