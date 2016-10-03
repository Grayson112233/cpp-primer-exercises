// Program to check the equality of two arrays

#include <iostream>

// true if two arrays are equal, false otherwise
// (up to but not including length l)
bool equal(int *a1, int *a2, int l) {
    for(int i = 0; i < l; i++) {
        if(a1[i] != a2[i]) {
            return false;
        }
    }
    return true;
}

using namespace std;

int main() {

    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 2, 3, 4, 5};
    int a3[] = {6, 7, 8, 9, 10};


    cout << "a1 and a2 are equal: " << (equal(a1, a2, 5) ? "true" : "false") << endl;
    cout << "a1 and a3 are equal: " << (equal(a1, a3, 5) ? "true" : "false") << endl;

    return 0;
}