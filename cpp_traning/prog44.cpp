#include<iostream>
int main()
{
    int num,square,sum=0;
    std::cout<<"Enetr a number:";
    std::cin>> num;

square=num*num;

while(square != 0) {
    sum=+square%10;
    square/=10;
}
if(sum==num){
    std::cout<<num<<"is aneon number:"
    <<std::endl;
} else {
    std::cout<<num<<"is not a neon number:"<<std::endl;
}
return 0;
}
