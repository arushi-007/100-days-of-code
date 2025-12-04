#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;  
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x > 0)
              ++pos;
        else if (x < 0)
            ++neg;
        else
             ++zero;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
