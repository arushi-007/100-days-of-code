#include<stdio.h>
int main()
{
int num,i;
int fact = 1;
printf("enter nnum:");
scanf("%d",&num);
for(i=1; i<= num; i++){
fact *= i;
}
printf("fact :%d\n",fact); 
return 0;
}
