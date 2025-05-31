//creat a class rectangle with private memberslength and width.add a public function to sey avalues and display the area
#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    void setValues(float l,float w){
        length=l;
        width=w;
    }
};
int main(){
    Rectangle rect;
    rect.setValues(5.0,3.0);
    return 0;
}