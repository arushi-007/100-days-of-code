#include <stdio.h>
int main() 
 {
	 int maxStars = 9;        
    int i, j;
    for (i = 1; i <= maxStars; i += 2) {
        for (j = 0; j < i; ++j) printf("*");
        printf("\n");
    }
    for (i = maxStars - 2; i >= 1; i -= 2) {
        for (j = 0; j < i; ++j) printf("*");
        if (i > 1) printf("\n");  
    }
    return 0;
}

