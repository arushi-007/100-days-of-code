#include <stdio.h>
#include <string.h>
int main(void) {
    char s[128];
    printf("Enter string: ");
    scanf("%s", s);              
    int n = strlen(s);
    int first = 1;           
    for (int i = 0; i < n; ++i) {
        for (int len = 1; i + len <= n; ++len) {
            if (!first) printf(",");
            for (int k = 0; k < len; ++k) putchar(s[i + k]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
