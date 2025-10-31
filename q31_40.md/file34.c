#include<stdio.h> 
int main() {
    int n, i, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            f = 1;
            break;
        }
    }
    if (n <= 1) f = 1;
    printf("%s\n", f == 0 ? "Prime" : "Not prime");
    return 0;
}
