// Program to convert celsius to fahrenheit and vice vesa.

#include <iostream>

using namespace std;

int main() {

	float temp;
	char unit;

	cout << "Enter units (c/f): ";
	if(!cin >> unit) {
		cout << "You must enter a char value." << endl;
		return 0;
	}
	cout << "Enter the value: ";
	if(!cin >> temp) {
		cout << "You must enter a numeric value" << endl;
	}

	unit = toupper(unit);

	if(unit != 'C' && unit != 'F') {
		cout << "You must enter either a 'C' or 'F'" << endl;
		return 0;
	}

	if(unit == 'C') {
		cout << temp << " degrees C is " << temp * 1.8 + 32 << " degrees F." << endl;
	} else if (unit == 'F') {
		cout << temp << " degrees F is " << (temp - 32) / 1.8 << " degrees C." << endl;
	}

	return 0;
}