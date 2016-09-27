// Program to demonstrate various string operations

#include <iostream>
#include <string>

using namespace std;

int main() {

    string word;
    string line;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Enter a line of text: ";
    // std::cin from above leaves the terminating whitespace
    // (in this case a newline) in the stream. We need to ignore
    // the leftover \n before reading a line, or the readline()
    // would terminate immediately
    cin.ignore();
    getline(cin, line);

    cout << "Word: " << word << endl;
    cout << "Line: " << line << endl;


    return 0;
}