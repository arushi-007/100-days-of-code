#include <stdio.h>

int main() {
    int n, i;
       float sum = 0.0; 
 	 scanf("%d", &n);
	for (i = 1; i <= n; i++) {
        float num = 2.0 * i - 1;
        float den = 2.0 * i;
        sum += num / den;
    }
    printf("Approximate sum: %.f ", sum);
    return 0;
}
