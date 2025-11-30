#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);      
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i) {
        if (s[i] == ' ')
            ++spaces;
        else if (s[i] >= '0' && s[i] <= '9')
            ++digits;
        else if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z'))
            ++special;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
