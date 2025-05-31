//creat a class student that take name and role no as constructor parameters and dispaly them using function
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNumber;
    public:
    Student(string n,int roll): name(n),rollNumber(roll){}
    void displaydetails(){
        cout<<"roll no:"<<rollNumber<<endl;
        cout<<"Name:"<<name <<endl;
    }
};
int main(){
    Student student("Alice",101);
    student.displaydetails();
    return 0;
}