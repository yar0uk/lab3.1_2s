#include "Pair.h"
#include <sstream>

Pair::Pair(const int x, const int y)
	:firtsValue(x), secondValue(y)
{ }

Pair::Pair(const Pair& second)
{	
	this->firtsValue = second.firtsValue;
	this->secondValue = second.secondValue;
}

Pair::~Pair(void)
{ }

Pair::operator string() const
{
	stringstream sstream;
	sstream << "(" << GetFirtsValue() << ", " << GetSecondValue() << ")";
	return sstream.str();
}

Pair operator+(const Pair& left, const Pair& right)
{
	Pair tmp;
	tmp.firtsValue = left.firtsValue + right.firtsValue;
	tmp.secondValue = left.secondValue + right.secondValue;
	return tmp;
}

Pair operator*(const Pair& left, const int key)
{
	Pair tmp;
	tmp.firtsValue = left.firtsValue * key;
	tmp.secondValue = left.secondValue * key;
	return tmp;
}

Pair operator*(const int key, const Pair& right)
{
	Pair tmp;
	tmp.firtsValue = right.firtsValue * key;
	tmp.secondValue = right.secondValue * key;
	return tmp;
}

ostream& operator<<(ostream& out, const Pair& right)
{
	return out << (string)right;
}

istream& operator>>(istream& in, Pair& right)
{
	int firtsValue, secondValue;
	cout << "Firts value = "; in >> firtsValue;
	cout << "Second value = "; in >> secondValue;

	right.SetFirtsValue(firtsValue);
	right.SetSecondValue(secondValue);

	return in;
}
