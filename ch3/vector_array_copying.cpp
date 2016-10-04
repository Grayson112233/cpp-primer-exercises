// Program to demonstrate copy initialization of vectors from arrays

#include <iostream>
#include <vector>
#include <array>

using namespace std;

// Copy the contents of a vector to an array
void vector_to_array(int *a, vector<int> v, int l) {
    for(int i = 0; i < l; i++) {
        a[i] = v[i];
    }
}

void print_array(int *a, int l) {
    for(int i = 0; i < l; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {

    int a[] = {1, 2, 3, 4, 5};
    vector<int> v(begin(a), end(a));

    // Print vector, double its values afterwards
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        v[i] *= 2;
    }
    cout << endl;

    vector_to_array(a, v, 5);
    print_array(a, 5);

    return 0;
}