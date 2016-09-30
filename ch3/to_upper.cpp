// Program to take an arbitrary number of elements as input,
// then print those words in upper case, four to a line.

#include <iostream>
#include <string>
#include <vector>
#include <locale>

using namespace std;

int main() {

    vector<string> words;

    string word;
    while(cin >> word) {
        if(word == "q") {
            break;
        } else {
            words.push_back(word);
        }
    }

    // Change each word to uppercase
    for(int i = 0; i < words.size(); i++) {
        int j = 0;
        while(words[i][j]) {
            words[i][j] = toupper(words[i][j]);
            j++;
        }
    }

    for(int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
        if(((i+1) % 4 == 0) || i == words.size() - 1) {
            cout << endl;
        }
    }

    return 0;
}