#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair
{
public:
	Pair(const int x = 0, const int y = 0);
	Pair(const Pair& second);
	~Pair(void);
	int GetFirtsValue() const { return firtsValue; }
	int GetSecondValue() const { return secondValue; }
	void SetFirtsValue(const int value) { firtsValue = value; }
	void SetSecondValue(const int value) { secondValue = value; }
	friend Pair operator + (const Pair& left, const Pair& right);
	friend Pair operator * (const Pair& left, const int key);
	friend Pair operator * (const int key, const Pair& right);
	operator string() const;
	friend ostream& operator << (ostream& out, const Pair& right);
	friend istream& operator >> (istream& in, Pair& right);
private:
	int firtsValue, secondValue;
};