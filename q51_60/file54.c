#include <stdio.h>
int main() 
 {
    int rows = 7;               
    int mid   = rows / 2 + 1;    
    for (int i = 1; i <= rows; ++i) {
        int stars;            
        if (i <= mid)              
            stars = 2 * i - 1;
        else                        
            stars = 2 * (rows - i + 1) + 1;
        for (int j = 0; j < stars; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
