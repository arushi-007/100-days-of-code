#include<stdio.h>
int main() {
    char s[100];
    if (scanf("%s", s) != 1) 
           return 0;
    int bestDigit = 0, bestCount = 0;
    for (int d = 0; d <= 9; ++d) {
        int cnt = 0;
        for (int i = 0; s[i]; ++i)
            if (s[i] - '0' == d)
                    ++cnt;
   if (cnt > bestCount) {
            bestCount = cnt;
            bestDigit = d;
        }
    }
    printf("%d\n", bestDigit);
    return 0;
}
