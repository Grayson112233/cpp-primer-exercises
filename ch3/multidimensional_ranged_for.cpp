// Program to demonstrate a ranged for loop iterating over
// a multidimensional array

#include <iostream>

using namespace std;

int main() {

    int a[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // row must be a reference, otherwise the array would be
    // converted to a pointer (which cannot be iterated)
    for(auto &row : a) {
        for(int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}