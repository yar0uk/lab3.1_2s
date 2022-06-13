#include "Complex.h"
#include <sstream>

Complex::Complex(const int x, const int y)
	:Pair(x, y)
{ }

Complex::Complex(const Pair& second)
	:Pair(second)
{ }

Complex::~Complex(void)
{ }

Complex::operator string() const
{
	stringstream sstream;
	sstream << "(" << GetFirtsValue() << ", " << GetSecondValue() << ")";
	return sstream.str();
}

Complex operator+(const Complex& left, const Complex& right)
{
	Complex tmp;
	tmp.SetFirtsValue(left.GetFirtsValue() + right.GetFirtsValue());
	tmp.SetSecondValue(left.GetSecondValue() + right.GetSecondValue());
	return tmp;
}

Complex operator-(const Complex& left, const Complex& right)
{
	Complex tmp;
	tmp.SetFirtsValue(left.GetFirtsValue() - right.GetFirtsValue());
	tmp.SetSecondValue(left.GetSecondValue() - right.GetSecondValue());
	return tmp;
}

Complex operator*(const Complex& left, const Complex& right)
{
	Complex tmp;
	double first = (left.GetFirtsValue() * right.GetFirtsValue() - left.GetSecondValue() * right.GetSecondValue());
	double second = (left.GetFirtsValue() * right.GetSecondValue() + left.GetSecondValue() * right.GetFirtsValue());
	tmp.SetFirtsValue(first);
	tmp.SetSecondValue(second);
	return tmp;
}

ostream& operator<<(ostream& out, const Complex& right)
{
	return out << (string)right;
}

istream& operator>>(istream& in, Complex& right)
{
	int firtsValue, secondValue;
	cout << "Firts value = "; in >> firtsValue;
	cout << "Second value = "; in >> secondValue;

	right.SetFirtsValue(firtsValue);
	right.SetSecondValue(secondValue);

	return in;
}
