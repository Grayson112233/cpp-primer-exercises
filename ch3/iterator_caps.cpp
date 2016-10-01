// Program to capitalize and print a given string with an iterator

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    // Make string uppercase
    string::iterator i = s.begin();
    while(i != s.end()) {
        *i = toupper(*i);
        ++i;
    }

    cout << s << endl;

    return 0;
}