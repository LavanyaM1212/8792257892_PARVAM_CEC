//create an instance and interact with that variable
#include <iostream>
#include <string>

// Define a class
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Method to display details
    void displayDetails() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Method to update age
    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Create an instance of the class
    Person person1("Alice", 25);

    // Interact with the instance
    person1.displayDetails(); // Display initial details

    // Update the age
    person1.setAge(30);

    // Display updated details
    person1.displayDetails();

    return 0;
}
