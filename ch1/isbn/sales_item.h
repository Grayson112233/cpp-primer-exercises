#include <string>

class SalesItem {

	std::string isbn;
	int units_sold;
	double price;

public:

	SalesItem(std::string isbn, int units_sold, double price);
	std::string get_isbn();
	bool compare(SalesItem item);

};