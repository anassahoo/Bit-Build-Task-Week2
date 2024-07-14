#include <iostream>
#include <conio.h>
using namespace std;

class Person {
    string name; // data member
    int age; // data member

public:
    // Member function to set name and age
    void SetInfo(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display name and age
    void DisplayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p; // Object creation
    p.SetInfo("Sadia",19);// Calling member function
    p.DisplayInfo(); // Calling member function

    getch(); // To hold the screen
 return 0;
}
