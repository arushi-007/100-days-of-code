

//write a program to calc simple , compund interest for given principal,rate and time
#include<stdio.h>
int main()
{
float P, R,T,SI, CI;
scanf("%f",&P);
scanf("%f",&R);
scanf("%f",&T);
SI = (P * R * T)/ 100;
float amount = P;
for (int i = 0; i< T; i++);
{ amount = amount +(amount * R /100);
}
CI = amount - P; 
printf("simple interest: %.2f",SI);
printf("compound interest: %.2f",CI);
return 0;
} 
