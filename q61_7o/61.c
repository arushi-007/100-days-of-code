#include<stdio.h>

int main() {
    int n, key;
    if (scanf("%d", &n) != 1) return 0;   
    int arr[100];
    for (int i = 0; i < n; ++i) 
scanf("%d", &arr[i]);
    scanf("%d", &key);                    
    int idx = -1;
    for (int i = 0; i < n; ++i)
        if (arr[i] == key)
 { idx = i;
 break; }
    printf("%d\n", idx);
    return 0;
}
