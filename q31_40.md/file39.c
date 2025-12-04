#include<stdio.h>
int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}
