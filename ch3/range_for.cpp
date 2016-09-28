// Program to demonstrate the range-based for statment

#include <iostream>
#include <string>

using namespace std;

int main() {

    string name = "Grayson";

    cout << "Name: " << name << endl;

    // Print characters one line at a time
    // NOTE: Range based for loops are only available
    // using the C++11 standard or later
    for (char c : name) {
        cout << c << endl;
    }

    return 0;
}