#include<stdio.h> 
int main() {
    int num, temp, n = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        int p = 1;
        for (int i = 0; i < n; i++) p *= digit;
        sum += p;
        temp /= 10;
    }
    printf("%s\n", sum == num ? "Armstrong" : "Not Armstrong");
    return 0;
}
