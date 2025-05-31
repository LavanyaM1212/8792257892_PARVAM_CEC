//check the length the string
#include<iostream>
#include<string>
int main(){
    std::string myString="Hello world";
    std::cout<<"Length using length():"<<
    myString.length()<<std::endl;
    std::cout<<"Length using size():"<<
    myString.size()<<std::endl;
    return 0;
}