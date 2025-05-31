#include<iostream>
using namespace std;
class Employee
{
    public:
    Employee()
    {
        cout<<"Default Constructor Invoked"<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor Evoked \n";
    }
};
int main(void)
{
    cout<<"In Main func \n";
    cout<<"Ist obj \n";
    Employee e1; //creating an object of employee
    cout<<"2nd obj \n";
    Employee e2;
    cout<<"ending main fun"<<endl;
    return 0;
}