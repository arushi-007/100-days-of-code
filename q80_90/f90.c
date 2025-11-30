#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);       
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a' - 'A');  
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + ('a' - 'A');   
    }
    printf("Toggled: %s", s);
    return 0;
}
