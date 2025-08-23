// person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Person {
private:
    string name;           // person name
    int age;               // person age
    string address;        // person address
    string phoneNumber;    // person phone number

public:
    // Constructor person
    Person(string pName, int pAge, string pAdd, string pNum) {
        name = pName;
        age = pAge;
        address = pAdd;
        phoneNumber = pNum;
    }

    // display person info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }

    // check if that person is adult (more than 18)
    bool isAdult() {
        return age >= 18;
    }

    // change address
    void move(string newAddress) {
        address = newAddress;
        cout << "New address: " << address << endl;
    }

    // person greeting
    void greet() {
        cout << "Hello, my name is " << name << "." << endl;
    }
};

int main() {
    // create object
    Person person1("John Doe", 20, "123 Main St", "123-456-7890");

    // diplay info
    person1.displayInfo();

    // check if person adult
    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    }
    else {
        cout << "This person is not an adult." << endl;
    }

    // change to new place by replace address
    person1.move("456 New Address Ave");

    // greeting person
    person1.greet();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
