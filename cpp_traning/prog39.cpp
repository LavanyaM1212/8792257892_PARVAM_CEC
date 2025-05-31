//find the given number 1339 is emrip or not
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}
int main() {
    int number = 1399;

    if (isPrime(number)) {
        int reversedNumber = reverseNumber(number);
        if (reversedNumber != number && isPrime(reversedNumber)) {
            cout<<number<<"is an Emirp number"<<endl;
        } else {
            cout<<number<<"is not an Emirp number"<<endl;
        }
    } else {
        cout<<number<<"is not an Emirp number"<<endl;
    }

    return 0;
}
