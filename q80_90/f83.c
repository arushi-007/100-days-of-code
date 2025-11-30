#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);       
    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                ++vowels;
            else
                ++consonants;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
