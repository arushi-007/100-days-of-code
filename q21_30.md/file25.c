#include <stdio.h>
int main()
 {
    float num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch(op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if((int)num2 != 0)
      printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
