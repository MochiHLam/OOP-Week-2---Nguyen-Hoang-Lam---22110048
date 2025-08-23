// course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Course {
private:
    string courseName;   // course name
    string courseCode;   // course code
    int credits;         // course credit
    string instructorName;  // intructor for this course name

public:
    // Constructor course
    Course(string cName, string cCode, int cCredits, string iName) {
        courseName = cName;
        courseCode = cCode;
        credits = cCredits;
        instructorName = iName;
    }

    //display course info 
    void displayInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor Name: " << instructorName << endl;
    }

    // check if this course have high credit
    bool isHighCredit() {
        return credits > 3;
    }

    // check if lab is required
    bool isLabRequired() {
        return credits > 4;
    }
};

int main() {
    // create objects
    Course course1("Object Oriented Programming", "CS202", 4, "Dr. John Doe");
    Course course2("Chemistry", "LB101", 5, "Ms.Anne");

    // display courses info 
    course1.displayInfo();

    // check if course has high course
    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    }
    else {
        cout << "This is not a high credit course." << endl;
    }

    // check if course need lab room
    if (course1.isLabRequired()) {
        cout << "This course requires a laboratory." << endl;
    }
    else {
        cout << "This course does not require a laboratory." << endl;
    }

    cout << "-----------------------------------------------" << endl;
    
    course2.displayInfo();
    
    if (course2.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    }
    else {
        cout << "This is not a high credit course." << endl;
    }
    
    if (course2.isLabRequired()) {
        cout << "This course requires a laboratory." << endl;
    }
    else {
        cout << "This course does not require a laboratory." << endl;
    }

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
