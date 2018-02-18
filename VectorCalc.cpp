/* Operations with vectors. */
#include <iostream>
#include "vector.cpp"
#include "vector.h"

using namespace std;

int main()
{
	double x1, y1, x2, y2, r1, r2, multy, number, length;
	int select, c;


	cout << "Enter operation" << endl;
	cout << endl;
	cout << "1. Sum" << endl;
	cout << "2. Substraction" << endl;
	cout << "3. Multiplication vector & vector" << endl;
	cout << "4. Length of vector" << endl;
	cout << "5. Multiplication vector & number" << endl;
	cout << endl;
	cin >> select;

	switch (select)
	{
	case 1: 
		cout << "Enter the first vector x1 y1" << endl;
		cin >> x1 >> y1;
		cout << "Enter the second vector x2 y2" << endl;
		cin >> x2 >> y2;
		r1 = sum(x1, x2);
		r2 = sum(y1, y2);
		Vector(r1, r2);
		break;

	case 2:
		cout << "Enter the first vector x1 y1" << endl;
		cin >> x1 >> y1;
		cout << "Enter the second vector x2 y2" << endl;
		cin >> x2 >> y2;
		r1 = substraction(x1, x2);
		r2 = substraction(x1, x2);
		Vector(r1, r2);
		break;

	case 3:
		cout << "Enter the first vector x1 y1" << endl;
		cin >> x1 >> y1;
		cout << "Enter the second vector x2 y2" << endl;
		cin >> x2 >> y2;
		multy = x1 * x2 + y1 * y2;
		cout << "Multiplication =  " << multy << endl;
		break;

	case 4:
		cout << "Enter vector x1 y1" << endl;
		cin >> x1 >> y1;
		length = sqrt(x1*x1 + y1*y1);
		cout << "Length is " << length << endl;
		break;

	case 5:
		cout << "Enter the vector x1 y1" << endl;
		cin >> x1 >> y1;
		cout << "Enter the number" << endl;
		cin >> number;
		r1 = multiply(number, x1);
		r2 = multiply(number, y1);
		Vector(r1, r2);
		break;
	
	default:
		break; 
	}

	system("pause");
	return 0;
}

