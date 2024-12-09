#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 variables");
scanf("%d%d%d",&a,&b,&c);
if(a<b && b>c)
printf("middle");
else if(a>b && a>c)
printf("right");
else
printf("left");
return 0;

}