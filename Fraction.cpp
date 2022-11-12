#include "Fraction.h"
//Arithmetic
Fraction Fraction::operator+(const Fraction& b) {
	Fraction temp;
	if (m_den==b.m_den)
	{
		temp.m_num = m_num + b.m_num;
		temp.m_den = m_den;
		return temp;
	}
	temp.m_num = m_num*b.m_den + b.m_num*m_den;
	temp.m_den = m_den * b.m_den;
	return temp;
}
Fraction Fraction::operator - (const Fraction& b) {
	Fraction temp;
	if (m_den == b.m_den)
	{
		temp.m_num = m_num - b.m_num;
		temp.m_den = m_den;
		return temp;
	}
	temp.m_num = m_num * b.m_den - b.m_num * m_den;
	temp.m_den = m_den * b.m_den;
	return temp;
}
Fraction Fraction::operator*(const Fraction& b) {
	Fraction temp;
	temp.m_num = m_num * b.m_num;
	temp.m_den = m_den * b.m_den;
	return temp;
}
//Arithmetic
bool Fraction::operator > (const Fraction& b) {
	return ((float)m_num / m_den) > ((float)b.m_num / b.m_den);
}
bool Fraction::operator < (const Fraction& b){
	return ((float)m_num / m_den) < ((float)b.m_num / b.m_den);
}
bool Fraction::operator == (const Fraction& b) {
	return ((float)m_num / m_den) == ((float)b.m_num / b.m_den);
}
bool Fraction::operator >= (const Fraction& b) {
	return ((float)m_num / m_den) >= ((float)b.m_num / b.m_den);
}
bool Fraction::operator <= (const Fraction& b) {
	return ((float)m_num / m_den) <= ((float)b.m_num / b.m_den);
}
bool Fraction::operator != (const Fraction& b) {
	return ((float)m_num / m_den) != ((float)b.m_num / b.m_den);
}
//Assignment
Fraction& Fraction::operator = (const Fraction& b) {
	m_num = b.m_num;
	m_den = b.m_den;
	return *this;
}
Fraction& Fraction::operator += (const Fraction& b) {
	*this = *this + b;
	return *this;
}
Fraction& Fraction::operator *= (const Fraction& b) {
	*this = *this * b;
	return *this;
}
//Inc/Dec
Fraction& Fraction::operator ++ () {
	Fraction temp(1, 1);
	*this += temp;
	return *this;
}
Fraction& Fraction::operator -- () {
	Fraction temp(1, 1);
	*this = *this - temp;
	return *this;
}
Fraction Fraction::operator ++ (int x) {
	Fraction temp(1, 1);
	*this += temp;
	return *this;
}
Fraction Fraction::operator -- (int x) {
	Fraction temp(1, 1);
	*this = *this - temp;
	return *this;
}
// type cast
Fraction::operator float() {
	return (float)m_num / m_den;
}
Fraction::operator int() {
	return (int)m_num / m_den;
}
// input output

void Fraction::output() {
	cout << m_num << "/" << m_den << endl;
}
istream& operator >> (istream& is,Fraction &p) {
	cout << "\nenter num:";
	is >> p.m_num;
	cout << "\nenter den: ";
	is >> p.m_den;
	return is;
}
ostream& operator <<(ostream& os,const Fraction&p) {
	os << p.m_num << "/" << p.m_den;
	return os;
}
Fraction::Fraction() {
	m_num = 0;
	m_den = 1;
}
Fraction::Fraction(int a, int b) {
	m_num = a;
	m_den = b;
}