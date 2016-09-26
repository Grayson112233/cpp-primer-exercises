// Program to test different methods of string intialization

#include <iostream>

using namespace std;

int main() {

	string s1 = "asdf";

	// s2 is a copy of s1
	string s2 = s1;
	
	// because s2 is a copy, this will only affect s2
	s2 = "qwerty";
	
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	return 0;
}