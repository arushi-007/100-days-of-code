#include <stdio.h>
int main()
 {
    int n, sum = 0, i, odd = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
