#include<stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1)
          return 0;          
    int a[100];
    for (int i = 0; i < n; ++i)
          scanf("%d", &a[i]);
    for (int i = 0; i < n / 2; ++i) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    for (int i = 0; i < n; ++i) {
        if (i)
               printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
