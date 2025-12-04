#include<stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) 
     return 0;
    int a[100];
    for (int i = 0; i < n; ++i)
    scanf("%d", &a[i]);
    scanf("%d", &k);
    k %= n;                  
    int b[100];
    for (int i = 0; i < n; ++i)
        b[(i + k) % n] = a[i];

    for (int i = 0; i < n; ++i) {
        if (i) 
         printf(" ");
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}
