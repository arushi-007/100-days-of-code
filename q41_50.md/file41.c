#include <stdio.h>
int main() {
    int num, temp, first, last, div = 1, middle, result;
    scanf("%d", &num);
    last = num % 10;   
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        div *= 10;
    }
    first = temp;    
    middle = num % div;  
    middle /= 10;     

    result = last * div + middle * 10 + first;
    printf("%d", result);
    return 0;
}
