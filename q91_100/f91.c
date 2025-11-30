#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);

    int j = 0;
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i) {
        char c = tolower(s[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
            s[j++] = s[i];
    }
    s[j] = '\0';
    printf("Result: %s", s);
    return 0;
}
