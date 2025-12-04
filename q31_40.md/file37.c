#include<stdio.h> 
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (max = (a > b) ? a : b; ; max++) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM: %d\n", max);
            break;
        }
    }
    return 0;
}
