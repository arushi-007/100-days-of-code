#include<stdio.h>
int main() {
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        printf("%c", s[i] == '0' ? '1' : '0');
    return 0;
}
