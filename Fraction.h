#ifndef Fraction_H
#define Fraction_H
#include<iostream>
#include<fstream>
using namespace std;
class Fraction
{
private:
	int m_num;
	int m_den;
public:
	Fraction();
	Fraction(int a, int b);
	//Arithmetic
	Fraction operator + (const Fraction& b);
	Fraction operator - (const Fraction& b);
	Fraction operator * (const Fraction& b);
	//Arithmetic
	bool operator > (const Fraction& b);
	bool operator < (const Fraction& b);
	bool operator == (const Fraction& b);
	bool operator >= (const Fraction& b);
	bool operator <= (const Fraction& b);
	bool operator != (const Fraction& b);
	//Assignment
	Fraction& operator = (const Fraction& b);
	Fraction& operator += (const Fraction& b);
	Fraction& operator *= (const Fraction& b);
	//Inc/Dec
	Fraction& operator ++ ();
	Fraction& operator -- ();
	Fraction operator ++ (int x);
	Fraction operator -- (int x);
	//type cast
	operator float();
	operator int();
	// input output
	friend istream& operator >> (istream& is, Fraction& p);
	friend ostream& operator <<(ostream& os, const Fraction& p);
	void output();
};
istream& operator >> (istream& is,Fraction &p);
ostream& operator <<(ostream& os,const Fraction &p);
#endif // !Fraction_H



