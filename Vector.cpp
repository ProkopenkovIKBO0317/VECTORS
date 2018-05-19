#include "stdafx.h"
#include "Vector.h"

void menu() {
	cout << "Enter operation:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Sybstract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Multiply on constant" << endl;
}

Vector::~Vector() {
	cout << endl << "destructor" << endl;
}

Vector::Vector(double x, double y) {
	this->x = x;
	this->y = y;
}


Overloading Overloading::operator = (const Overloading & other)
{
	this->x = other.x;
	this->y = other.y;
	return other;
}

Overloading Overloading::operator + (const Overloading &other)
{
	Overloading temp;
	temp.x = this->x + other.x;
	temp.y = this->y + other.y;
	return temp;
}

Overloading Overloading::operator - (const Overloading & other)
{
	Overloading temp;
	temp.x = this->x - other.x;
	temp.y = this->y - other.y;
	return temp;
}

Overloading Overloading::operator * (const Overloading & other)
{
	Overloading temp;
	temp.x = (this->x * other.x - this->y * other.y);
	temp.y = (this->x * other.y + other.x * this->y);
	return temp;
}

Overloading Overloading::operator / (const Overloading & other)
{
	Overloading temp;
	temp.x = ((this->x*other.x + this->y*other.y) / (other.x*other.x + other.y*other.y));
	temp.y = ((this->y*other.x - this->x*other.y) / (other.x*other.x + other.y*other.y));
	return temp;
}

ostream& operator <<(ostream & os, const Overloading &other)
{

	os << "Resut: (" << other.x << ';' << other.y << " )" << endl;
	return os;
}

istream& operator >> (istream & os, Overloading & other)
{
	os >> other.x >> other.y;
	return os;
}


VectorB VectorB::multyN(VectorB a, double n)
{
	a.x = a.x * n;
	a.y = a.y * n;
	return a;
}



