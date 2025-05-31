//conver farenhit to celcius and celcius to farenhit as per user required
#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, convertedTemp;

    cout << "Temperature Conversion Program\n";
    cout << "1. Convert Fahrenheit to Celsius\n";
    cout << "2. Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = (temperature - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << convertedTemp << "°C\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = (temperature * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemp << "°F\n";
    } else {
        cout << "Invalid choice! Please run the program again and select 1 or 2.\n";
    }

    return 0;
}
