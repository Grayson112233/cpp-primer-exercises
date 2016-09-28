// Program which uses ispunct() and a range-based for loop
// to print the number of punctuation marks in a string.

#include <iostream>
#include <string>

using namespace std;

int main() {

    string sentence = "This is a sentence. It's got some punctuation.";

    cout << sentence << endl;

    int punct_count = 0;

    for (char c : sentence) {
        if(ispunct(c)) {
            punct_count += 1;
        }
    }

    cout << "Counted " << punct_count << " punctuation marks." << endl;

    return 0;
}