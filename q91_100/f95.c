#include <stdio.h>
#include <string.h>
int isRotation(const char *a, const char *b) {
    if (strlen(a) != strlen(b))
            return 0;
    if (!*a) return 1;    
    char temp[512];
    strcpy(temp, a);
    strcat(temp, a);
    int len = strlen(b);
    for (int i = 0; temp[i]; ++i) {
        int j = 0;
        while (j < len && temp[i + j] == b[j]) ++j;
        if (j == len) return 1;     
    }
    return 0;
}
