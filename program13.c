


#include<stdio.h>
 long sum (int );
 int main()
 {
    int n=0;
    scanf("%d",&n);
    printf("summation of %d is %ld",n,fib(n));
 }
   long fib(int no)
   {
    if(no<=0) return 0;
    if(no==1) return 1;
    return fib(no-2)+fib(no-1);
   }
    
    