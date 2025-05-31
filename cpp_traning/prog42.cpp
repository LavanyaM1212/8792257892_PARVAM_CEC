#include <iostream>
#include <vector>
#include <cmath>

bool isSphenic(int n) {
    std::vector<int> primeFactors;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            bool isPrime = true;
            for (int j = 2; j <= std::sqrt(i); ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primeFactors.push_back(i);
                while (n % i == 0) {
                    n /= i;
                }
            }
        }
    }
    
    if(primeFactors.size() != 3)
        return false;
    
    return true;
}

int main() {
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    if (isSphenic(num)) {
        std::cout<<num<<"is a sphenic number."<<std::endl;
    } else {
        std::cout<<num<<"is not a sphenic number."<<std::endl;
    }

    return 0;
}