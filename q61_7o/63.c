#include<stdio.h>
int main() {
    int n, m;
    if (scanf("%d", &n) != 1)
      return 0;       
    int a[200];
    for (int i = 0; i < n; ++i)
           scanf("%d", &a[i]);
    if (scanf("%d", &m) != 1)
           return 0;       
    int b[200];
    for (int i = 0; i < m; ++i) 
         scanf("%d", &b[i]);
    for (int i = 0; i < n; ++i) {
        if (i) 
         printf(" ");
        printf("%d", a[i]);
    }
    for (int i = 0; i < m; ++i) {
        printf(" %d", b[i]);
    }
    printf("\n");
    return 0;
}
