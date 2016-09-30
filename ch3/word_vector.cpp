// Program to store an arbitrary number of words and then
// repeat them using a vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> words;

    cout << "Enter individual words. Enter 'q' to finish." << endl;

    string word;
    while(cin >> word) {
        if(word == "q") {
            break;
        } else {
            words.push_back(word);
        }
    }

    cout << "You entered:" << endl;
    for (string s : words) {
        cout << s << endl;
    }

    return 0;
}