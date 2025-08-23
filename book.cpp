// book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Book {
private:
    string title;  // book title
    string author; // book author

public:
    // Constructor book
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // display book info 
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() 
{
    // create objects
    Book book1("C++ Programming", "Bjarne Stroustrup");
    Book book2("Mathematics Upper", "Nguyen Van A");

    // display info 
    book1.displayInfo();
    book2.displayInfo();

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
