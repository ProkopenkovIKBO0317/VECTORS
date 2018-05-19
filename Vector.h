#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void menu();

class Vector {
protected:
	double x;
	double y;
public:
	Vector() : x(0), y(0) {}
	~Vector();
	Vector(double x, double y);
};

class Overloading : public Vector
{
public:
	Overloading operator = (const Overloading & other);
	Overloading operator + (const Overloading & other);
	Overloading operator - (const Overloading & other);
	Overloading operator * (const Overloading & other);
	Overloading operator / (const Overloading & other);

	friend ostream & operator << ( ostream & os,const Overloading & other);
	friend istream & operator >> (istream & os, Overloading & other);
};

class VectorB : public Overloading
{
private:
	double B;
};



