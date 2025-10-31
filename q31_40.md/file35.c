#include<stdio.h> 
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d: ", num);
    for (i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            }
if (i != num / i) printf("%d ", num / i);
     
    }
    return 0;
}
