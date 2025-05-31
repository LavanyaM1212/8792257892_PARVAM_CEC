 //Shape Area Calculator Using Inheritance
 #include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined for generic shape." << endl;
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void calculateArea() override {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculateArea() override {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}

    void calculateArea() override {
        float area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};
int main() {
    Shape* shape;

    Circle circle(5.0);
    shape = &circle;
    shape->calculateArea();

    Rectangle rectangle(4.0, 6.0);
    shape = &rectangle;
    shape->calculateArea();

    Triangle triangle(3.0, 4.0);
    shape = &triangle;
    shape->calculateArea();

    return 0;
}
