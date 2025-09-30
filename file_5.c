//write a program to swap 2 no using 3rd variable
#include<stdio.h>
int main()
{
int num1,num2, temp_num;
num1=5;
num2=7;
scanf("%d",&num1);
scanf("%d",&num2);
temp_num=num1;
num1=num2;
num2=temp_num;


printf("after swap: num1=%d, num2=%d", num1,num2);
return 0;
} 
 
