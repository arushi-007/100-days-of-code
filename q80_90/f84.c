#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);        
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a' - 'A');  
        ++i;
    }
    printf("Uppercase: %s", s);
    return 0;
}
