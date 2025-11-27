#include<stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; ++i) 
     scanf("%d", &a[i]);
    scanf("%d", &key);
    int l = 0, r = n - 1, p = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == key)
        { p = m;
              break; }
        a[m] < key ? (l = m + 1) : (r = m - 1);
    }

    p == -1 ? printf("-1\n") : printf("Found at index %d\n", p);
    return 0;
}
