#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);         
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0') {
        printf("%c\n", s[i]);
        ++i;
    }
    return 0;
}
