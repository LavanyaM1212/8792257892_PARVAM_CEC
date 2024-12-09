#include<stdio.h>
int main()
{
int number;
printf("enter an integer:"); 
scanf("%d",&number);
if(number%2==0)
printf("a is even number\n",number);
else
printf("a is odd number\n",number);
return 0;
}
