#include <stdio.h>
int main() 
 {
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    int first = 1;                    
    for (int num = 2; num <= n; ++num) {
        int isPrime = 1;               
        for (int d = 2; d < num; ++d) { 
            if (num % d == 0) {
                isPrime = 0;    
                d = num;         
            }
        }
        if (isPrime) {
            if (!first) printf(" ");
            printf("%d", num);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
