#include <iostream>
using namespace std;
#include <string>

class Vehicle {
private:
    string make;
    string model;

public:
    // Constructor
    Vehicle(string make, string model) {
        this->make = make;
        this->model = model;
    }

    // Methods to set attributes
    void setMake(string make) {
        this->make = make;
    }

    void setModel(string model) {
        this->model = model;
    }

    // Method to display vehicle information
    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    // Example usage
    Vehicle myCar("Toyota", "Camry");
    myCar.displayInfo();

    // Changing attributes
    myCar.setModel("Corolla");
    myCar.displayInfo();

    return 0;
}
