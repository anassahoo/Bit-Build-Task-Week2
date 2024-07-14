#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string make;  // data member for the make of the vehicle
    string model; // data member for the model of the vehicle

public:
    // Constructor
    Vehicle(string m, string mod) : make(m), model(mod) {}

    // Virtual function to display vehicle info
    virtual void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << endl;
    }

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived class Car inherits from Vehicle
class Car : public Vehicle {
private:
    int numberOfDoors; // additional data member for Car

public:
    // Constructor
    Car(string m, string mod, int doors) : Vehicle(m, mod), numberOfDoors(doors) {}

    // Overriding displayInfo function to include number of doors
    void displayInfo() const override {
        cout << "Car - Make: " << make << ", Model: " << model << ", Doors: " << numberOfDoors << endl;
    }
};

int main() {
    // Creating a Car object
    Car car("Toyota", "Camry", 4);

    // Displaying car information
    car.displayInfo();
     return 0;
}
