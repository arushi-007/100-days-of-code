#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    printf("%  d\n", sum);
    return 0;
}
