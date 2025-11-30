#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);          
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0') ++i; 
    int j = 0, k = i - 1;
    while (j < k && s[j] == s[k]) {
        ++j; --k;
    }
    if (j >= k)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
