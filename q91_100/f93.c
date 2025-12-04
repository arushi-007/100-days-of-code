#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char a[256], b[256];
    printf("Enter first string: ");
    fgets(a, sizeof a, stdin);
    printf("Enter second string: ");
    fgets(b, sizeof b, stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; a[i]; ++i) {
        if (isalpha(a[i])) {
            freq[tolower(a[i]) - 'a']++;
            freq[tolower(b[i]) - 'a']--;
        }
    }

    for (int i = 0; i < 26; ++i)
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }

    printf("Anagrams\n");
    return 0;
}
