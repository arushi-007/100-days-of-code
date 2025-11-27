#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    int value;
    scanf("%d", &value);
    int maxVal = value, minVal = value;
    for (int i = 1; i < n; ++i) {
        scanf("%d", &value);
        if (value > maxVal) maxVal = value;
        if (value < minVal) minVal = value;
    }
    printf("Max=%d, Min=%d\n", maxVal, minVal);
    return 0;
}
