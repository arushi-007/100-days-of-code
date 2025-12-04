#include<stdio.h>
int main() {
    int n, pos, x;
    scanf("%d", &n);             
    int a[101];                 
    for (int i = 0; i < n; ++i)
     scanf("%d", &a[i]);
    scanf("%d %d", &pos, &x);     
    for (int i = n; i > pos; --i)  
        a[i] = a[i - 1];
    a[pos] = x;                    
    for (int i = 0; i <= n; ++i) {
        if (i)
         printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
