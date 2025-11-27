#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    int arr[100];                 
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);      
    }

    for (int i = 0; i < n; ++i) {
        if (i) printf(" ");         
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
