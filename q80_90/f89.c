#include <stdio.h>
int main(void) {
    char s[256], ch;
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);       
    printf("Enter the character to count: ");
    scanf(" %c", &ch);        
    int cnt = 0;
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i)
        if (s[i] == ch) ++cnt;
    printf("Frequency of '%c': %d\n", ch, cnt);
    return 0;
}
