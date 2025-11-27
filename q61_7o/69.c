#include<stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1)
           return 0;  
    long long max1 = -1, max2 = -1;      
    for (int i = 0; i < n; ++i) {
        long long x;
        scanf("%d", &x);                
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } 
else 
            if (x > max2 && x < max1) {
            max2 = x;
        }
    }
    if (max2 == -1)
     printf("Not enough elements\n");
    else printf("%lld\n", max2);
    return 0;
}
