#include<stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);               
    int a[101];                   
    for (int i = 0; i < n; ++i) 
    scanf("%d", &a[i]);
    scanf("%d", &x);             
    int i = n - 1;
    while (i >= 0 && a[i] > x) {   
        a[i + 1] = a[i];
        --i;
    }
    a[i + 1] = x;                 
    for (int j = 0; j <= n; ++j) {
        if (j)
          printf(" ");
        printf("%d", a[j]);
    }
    printf("\n");
    return 0;
}
