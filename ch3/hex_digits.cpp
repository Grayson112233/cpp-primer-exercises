// Progam to convert a given series of decimal digits (from 0 to 15)
// into hexadecmal digits

#include <iostream>
#include <string>

using namespace std;

int main() {

    const string digits = "0123456789ABCDEF";

    string result;

    cout << "Enter decimal numbers from 0 to 15. Enter 'q' when done." << endl;

    int n;
    while(cin >> n) {
        // Ensure n is within the appropriate range
        if(n >=0 && n <= 15) {
            result += digits[n];
        }
    }

    cout << "Corresponding hex digits are: " << result << endl;

    return 0;
}