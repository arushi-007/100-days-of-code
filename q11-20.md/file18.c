#include<stdio.h>
int main() {
    float percentage;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);
    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade B\n");
    else if (percentage >= 70 && percentage < 80)
        printf("Grade C\n");
    else if (percentage >= 60 && percentage < 70)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}
