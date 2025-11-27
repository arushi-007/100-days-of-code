#include<stdio.h>
int main() {
    int n, pos;
    if (scanf("%d", &n) != 1) 
      return 0;          
    int a[100];                            
    for (int i = 0; i < n; ++i)
      scanf("%d", &a[i]);
    scanf("%d", &pos);                          
    for (int i = pos; i < n - 1; ++i) a[i] = a[i + 1];
    for (int i = 0; i < n - 1; ++i) {
        if (i)
       printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
