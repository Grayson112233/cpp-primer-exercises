// Program to demo the pointer properties of arrays

#include <iostream>

using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5};

    // Because the array is denoted by a pointer to its first
    // element, we can change the first element this way:
    *a = -1;

    int *p = a;
    p += 4;
    *p = -5;

    for(int i = 0; i < 5; i++) {
        cout << a[i] << " " << endl;
    }

    return 0;
}