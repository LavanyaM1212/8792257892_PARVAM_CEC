#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Finding proper divisors and summing them
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Checking if the number is perfect
    if (sum == num) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is not a Perfect Number." << endl;
    }

    return 0;
}
                                                                                                   