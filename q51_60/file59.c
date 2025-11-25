#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0; 
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
              ++even;
        else     
      ++odd;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
