// Program to sum the numbers from 50 to 100 (inclusive) using a while loop

#include <iostream>

int main() {
	int i = 50, sum = 0;
	while(i <= 100) {
		sum += i;
		i++;
	}
	std::cout << "The sum of [50, 100] is " << sum << std::endl;
	return 0;
}