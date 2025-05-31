#include<iostream>
using namspace std;
class Number {
    public:
    inline void displaySquare(int num) {
        cout << "Square of "<< num << " is: " << num * num << endl;
    }
};
int main() {
    Number number;
    int unput;

    cout << "Enetr a number to find its square: ";
    cin >> input;
    number.displaySquare(input);
}
