#include "rectangle.h"
int main() {
	Rectungle rect1;
	Rectungle rect2(3, 4);
	
	cout << rect1.convert() << endl;
	cout << "Perimeter: " << rect1.perimeter() << endl;
	cout << "square " << rect1.aquare() << endl;
	cout << "lenght of diagonal" << rect1.lenght_of_diagonal() << endl;

		cout << rect2.convert() << endl;
		cout << "Perimeter: " << rect2.perimeter() << endl;
		cout << "square " << rect2.aquare() << endl;
		cout << "lenght of diagonal" << rect2.lenght_of_diagonal() << endl;

	return 0;
}