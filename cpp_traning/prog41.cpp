//Sphenic number can be vhecked by the fact that every sphenic number will be exactly 8 divisor

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isSphenic(int n) {
    int primeCount = 0;
    int divisorCount = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisorCount++;
            if (isPrime(i)) {
                primeCount++;
            }
        }
    }

    return (divisorCount == 8 && primeCount == 3);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isSphenic(num)) {
        cout << num << " is a sphenic number." << endl;
    } else {
        cout << num << " is NOT a sphenic number." << endl;
    }

    return 0;
}

                                                                                                                          