//creat a class person withpublic members name amd age use an objec to set the value and display theme
#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
    }
};
int main(){
    person p;
    p.name="Alice";
    p.age=25;
    p.display();
    return 0;
}
