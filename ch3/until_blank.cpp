// Program to take and print back lines of input until
// a blank line is entered

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;

    cout << "Printing input. Enter a blank line to quit." << endl;
    
    do {
        cout << "> ";
        getline(cin, s);
        cout << s << endl;
    } while(s.empty() == false);

    return 0;
}