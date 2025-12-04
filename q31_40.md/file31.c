#include<stdio.h> 
void printBinary(int num) {
    if (num > 1) printBinary(num / 2);
    printf("%d", num % 2);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
