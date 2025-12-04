#include <stdio.h>
int main() {
    float a, b, c, D;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0)
        printf("Real & different roots\n");
    else if (D == 0)
        printf("Real & same roots\n");
    else
        printf("Complex roots\n");
    return 0;
}
