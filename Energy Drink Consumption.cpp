#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	const double Customers = 16500;
	const double Weekly = 0.15;
	const double Flavor = 0.58;
	cout << "Amount Of Customers That Purchase Weekly: " << Customers * Weekly << endl;
	cout << "Amount Of Customers That Prefer Citrus Flavored Drinks: " << Customers * Flavor << endl;
}