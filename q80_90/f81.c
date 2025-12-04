#include <stdio.h>
int main() 
 {
    char s[256];
    printf("Enter text: ");
    fgets(s, sizeof s, stdin);         
    int cnt = 0;
    while (s[cnt] != '\n' && s[cnt] != '\0')
        ++cnt;              
    printf("Characters: %d\n", cnt);
    return 0;
}
