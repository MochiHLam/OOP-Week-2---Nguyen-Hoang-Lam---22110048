// rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;  // rectangle width
    int height; // rectangle height

public:
    // Constructor rectangle
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // calculate rectangle area 
    int calculateArea() {
        return width * height;
    }

    // display result, use calculation function at the same time
    void displayArea() {
        cout << "Area of rectangle: " << calculateArea() << endl;
    }
};

int main() 
{
    // create object
    Rectangle rectangle1(5, 10);

    // display area result
    rectangle1.displayArea();

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
