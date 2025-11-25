#include <stdio.h>
void print_irregular_diamond_pattern() {
    int i, j;
    int num_rows = 5;
    int num_stars;
    printf("--- Pattern Output ---\n");
    for (i = 1; i <= num_rows; i++) {
        if (i <= 3) {
            num_stars = 2 * i - 1;
        } 
        else {
            int k = num_rows + 1 - i; // k = 6 - i
            num_stars = 2 * k - 1;
        }
        for (j = 1; j <= num_stars; j++) {
            printf("*");
        }
        printf("\n");
        if (i < num_rows) {
            printf("\n");
        }
    }
}

int main() {
    print_irregular_diamond_pattern();
    return 0;
}
