 //write a program to find and display the sum of 1st n natural no 
#include<stdio.h>
int main()
{
int n,sum=0;
scanf("%d",&n);
for(int i=1;i<=n; i++) 

sum+=i;
printf("sum of n natural no:%d",sum);

return 0;
}
