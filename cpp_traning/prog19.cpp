//area of triangle and rectangle using classes
#include<iostream>
using namespace std;
class Rectangle{
    public:
    float length,breath;
    void getData(){
        cout<<"enter the length and breath of rectangle :";
        cin>>length>>breath;
    }
    float computeArea(){
        return length*breath;
    }
};
class Triangle {
    public:
    float base,height;
    void getData(){
        cout<<"Enter base and height of triangle: ";
        cin>>base>> height;
    }
    float computeArea(){
        return 0.5*base*height;
    }
};
int main(){
    Rectangle rect;
    Triangle tri;
    rect.getData();
    cout<<"Area of Rectangle="<<rect.computeArea()<<endl;
    tri.getData();
    cout<<"Area of triangle="<<tri.computeArea()<<endl;
    return 0;
}
