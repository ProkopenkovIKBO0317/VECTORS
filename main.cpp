#include "stdafx.h"
#include "Vector.h"

using namespace std;


int main()
{
	int N;
	char op;

	Overloading v1, v2;
	Overloading v;
	VectorB v3;

	menu();
	cin >> op;
	switch (op) {
	case '1':


		cin >> v1 >> v2;
		v = v1 + v2;
		cout << v;
		break;

	case '2':

		cin >> v1 >> v2;
		v = v1 - v2;
		cout << v;
		break;

	case '3':

		cin >> v1 >> v2;
		v = v1 * v2;
		cout << v;
		break;

	case '4':

		cin >> v3 >> N;
		cout << v3 * N;
		break;

	default:
		cout << endl << "Error" << endl << endl;
		break;
	}
	system("pause");


	return 0;
}
