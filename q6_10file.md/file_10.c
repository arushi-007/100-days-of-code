//write a program to input time in sec and convert to hours:min:secs
#include<stdio.h>
int main()
{
int t_secs,hours,min,secs;
scanf("%d",&t_secs);
hours = t_secs / 3600;
min = (t_secs % 3600) / 60;
secs = t_secs % 60;
printf("%d:%d:%d",hours,min,secs);
return 0;
} 
