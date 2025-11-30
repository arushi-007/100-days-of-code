#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);        
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0') ++i;  
    for (int j = 0; j < i / 2; ++j) {
        char tmp = s[j];
        s[j] = s[i - 1 - j];
        s[i - 1 - j] = tmp;
    }
    printf("Reversed: %s", s);
    return 0;
}
