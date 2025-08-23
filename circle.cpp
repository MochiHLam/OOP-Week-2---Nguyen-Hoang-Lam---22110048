// circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#define PI 3.1415926535 //define PI
using namespace std;

class Circle {
private:
    double radius;  //circle radius
    string color;   //circle color

public:
    // Constructor circle 
    Circle(double r, string c) {
        radius = r;
        color = c;
    }

    //check if valid for positive radius value
    bool checkCircle(double r) {
        if (r > 0) {
            return true;  // Valid radius
        }
        else {
            cout << "Bán kính phải là số dương!" << endl;
            return false; // Invalid radius
        }
    }
    // calculate circle perimeter 
    double circumference() {
        return 2 * PI * radius;
    }

    // calculate circle area 
    double area() {
        return PI * radius * radius;
    }

    // display calculation info if the circle is valid
    void displayInfo() {
        if (checkCircle(radius)) {
            cout << "Circle perimeter: " << circumference() << endl;
            cout << "Circle area: " << area() << endl;
            cout << "Circle color: " << color << endl;
        }
        else {
            cout << "Invalid radius" << endl;
        }
    }
};

int main() {
    double r;
    string c;

    // input radius and color
    cout << "Input circle radius: ";
    cin >> r;
    cout << "Input circle color: ";
    cin >> c;

    // create object
    Circle circle1(r, c);

    // display info
    circle1.displayInfo();

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
