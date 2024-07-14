#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    virtual void display() {
        cout << "Vehicle" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void display() override {
              cout << "Car" << endl;
    }
};

int main() {
    // Pointer to Vehicle pointing to Car object
    Vehicle *vehicle = new Car();

    // Call overridden method
    vehicle->display();

    // Clean up memory
    delete vehicle;

    }
