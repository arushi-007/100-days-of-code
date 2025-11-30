#include <stdio.h>
int main(void) {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof s, stdin);  

    int seen[26] = {0};          
    char repeat = 0;
    for (int i = 0; s[i] != '\n' && s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int idx = s[i] - 'a';
            if (seen[idx] == 0) {
                seen[idx] = 1;            
            } else if (seen[idx] == 1) {
                repeat = s[i];             
                break;
            }
        }
    }

    if (repeat)
        printf("First repeating lowercase: %c\n", repeat);
    else
        printf("No repeating lowercase letter found.\n");
    return 0;
}
