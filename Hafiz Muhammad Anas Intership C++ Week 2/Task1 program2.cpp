#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Method to display person details
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create a Person object
    Person person("John Doe", 30);

    // Display the Person object
    person.display();

    return 0;
}
