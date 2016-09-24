#include "sales_item.h"

SalesItem::SalesItem(std::string isbn, int units_sold, double price) {
	this->isbn = isbn;
	// Prevent negative quantity sold
	if(units_sold < 0) { units_sold = 0; }
	this->units_sold = units_sold;
	// Prevent negative prices
	if(price < 0) { price = 0; }
	this->price = price;
}

std::string SalesItem::get_isbn() {
	return isbn;
}

// Return true if ISBN's match, false otherwise
bool SalesItem::compare(SalesItem item) {
	return isbn.compare(item.get_isbn()) == 0;
}