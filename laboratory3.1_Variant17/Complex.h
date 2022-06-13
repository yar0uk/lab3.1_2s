#pragma once
#include "Pair.h"

class Complex : public Pair
{
public:
	Complex(const int x = 0, const int y = 0);
	Complex(const Pair& second);
	~Complex(void);
	friend Complex operator + (const Complex& left, const Complex& right);
	friend Complex operator - (const Complex& left, const Complex& right);
	friend Complex operator * (const Complex& left, const Complex& right);
	operator string() const;
	friend ostream& operator << (ostream& out, const Complex& right);
	friend istream& operator >> (istream& in, Complex& right);
};