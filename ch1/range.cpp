// Program to print the range between to given numbers

#include <iostream>

using namespace std;

int main() {

	int x, y;

	cout << "Enter 1st number: ";
	cin >> x;
	cout << "Enter 2nd number: ";
	cin >> y;

	if(x < y) {
		for(int i = x; x <= y; x++) {
			cout << x << " ";
		}
	}

	if(x > y) {
		for(int i = x; x >= y; x--) {
			cout << x << " ";
		}
	}

	cout << endl;

	return 0;
}