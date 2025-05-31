//check if the given character is vowel or not
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<ch<<"is vowel"<<endl;
    }else{
        cout<<ch<<"is not a vowel"<<endl;
    }
    return 0;
}

