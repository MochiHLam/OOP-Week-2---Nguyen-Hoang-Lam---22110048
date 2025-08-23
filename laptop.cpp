// laptop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;  // laptop brand
    string model;  // laptop model
    int ram;       // laptop RAM
    int storage;   // laptop storage
    string gpu;       // laptop GPU

public:
    // Constructor laptop
    Laptop(string lapBrand, string lapModel, int lapRam, int lapStorage, string lapGpu) {
        brand = lapBrand;
        model = lapModel;
        ram = lapRam;
        storage = lapStorage;
        gpu = lapGpu;
    }

    // display lapto info
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu  << endl;
        cout << "-----------------------------" << endl;
    }

    // check if the laptop RAM meet the requirement
    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        }
        else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }
    // check if the laptop GPU meet the requirement
    void checkGPU() {
        if (gpu == "NVIDIA GeForce GTX 1650" || gpu == "NVIDIA RTX 3070") {
            cout << "This laptop can run games." << endl;
        }
        else {
            cout << "This laptop does not have a powerful enough GPU to run games." << endl;
        }
    }

    // upgarde RAM for laptop by add RAM
    void upgradeRAM(int addRam) {
        ram += addRam;
        cout << "RAM upgraded. New RAM size: " << ram << " GB" << endl;
    }
};

int main() {
    // create object
    Laptop laptop1("Dell", "XPS 13", 8, 256, "NVDIA RTX 3060");

    // display info
    laptop1.displayInfo();

    // check the RAM requirement
    laptop1.checkRAM(16);

    // check the laptop GPU
    laptop1.checkGPU();

    // Upgrade laptop by adding RAM
    laptop1.upgradeRAM(8);

    // Display info again after laptop upgraded
    laptop1.displayInfo();

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
