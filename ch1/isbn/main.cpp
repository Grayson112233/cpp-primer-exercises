// Program to perform operations on SalesItem objects

#include <iostream>
#include "sales_item.h"

using namespace std;

int main() {

	SalesItem book1 = SalesItem("asdf", 5, 10.5);
	SalesItem book2 = SalesItem("asdf", 6, 9.95);
	SalesItem book3 = SalesItem("qwerty", 1, 180);

	cout << "Compare book1 and book2: " << book1.compare(book2) << endl;
	cout << "Compare book1 and book3: " << book1.compare(book3) << endl;

	return 0;
}