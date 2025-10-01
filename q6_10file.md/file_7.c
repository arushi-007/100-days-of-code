//write a program to swap two no without using a 3rd no.
#include<stdio.h>
int main()
{
int a=5,b=7;
a=a^b;
b=a^b;
a=a^b;
printf("after swap: a=%d, b=%d",a,b);
return 0;
}
