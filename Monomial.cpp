//#include "Monomial.h"
//Monomial::Monomial() {
//	coef = 1;
//	expo = 0;
//}
//Monomial::Monomial(double a, int b) {
//	coef = a;
//	expo = b;
//}
//Monomial Monomial :: operator +(const Monomial& a) {
//	Monomial temp;
//	temp.coef = coef + a.coef;
//	temp.expo = expo;
//	return temp;
//}
//Monomial Monomial ::operator *(const Monomial& a) {
//	Monomial temp;
//	temp.coef = coef * a.coef;
//	temp.expo = expo + a.expo;
//	return temp;
//}
//bool Monomial::operator >(const Monomial& a) {
//	bool c;
//	expo == a.expo ? c = coef > a.coef: c = expo > a.expo;
//	return c;
//}
//bool Monomial::operator <(const Monomial& a) {
//	bool c;
//	expo == a.expo ? c = coef < a.coef: c = expo < a.expo;
//	return c;
//}
//bool Monomial::operator == (const Monomial& a) {
//	return (coef == a.coef) && (expo == a.expo);
//}
//bool Monomial:: operator >=(const Monomial& a) {
//	bool c;
//	expo == a.expo ? c = coef >= a.coef: c = expo >= a.expo;
//	return c;
//}
//bool Monomial::operator <=(const Monomial& a) {
//	bool c;
//	expo == a.expo ? c = coef <= a.coef : c = expo <= a.expo;
//	return c;
//}
//bool Monomial:: operator != (const Monomial& a) {
//	return (coef != a.coef) || (expo != a.expo);
//}
//Monomial& Monomial::operator =(const Monomial& a) {
//	coef = a.coef;
//	expo = a.expo;
//	return *this;
//}
//Monomial& Monomial::operator +=(const Monomial& a) {
//	coef += a.coef;
//	return *this;
//}
//Monomial& Monomial:: operator *=(const Monomial& a) {
//	*this = *this * a;
//	return *this;
//}
//Monomial& Monomial::operator ++() {
//	expo++;
//	return *this;
//} 
//Monomial& Monomial::operator -- () {
//	expo--;
//	return *this;
//}
//Monomial Monomial::operator ++(int x) {
//	expo++;
//	return *this;
//}
//Monomial Monomial:: operator -- (int ) {
//	expo--;
//	return *this;
//}
//Monomial Monomial::operator !() {
//	coef *= (expo);
//	expo--;
//	return *this;
//}
//istream& operator >> (istream& is, Monomial& p) {
//	cout << "\nenter coef:";
//	is >> p.coef;
//	cout << "\n enter expo:";
//	is >> p.expo;
//	return is;
//
//}
//ostream& operator << (ostream& os, const Monomial& p) {
//	os << p.coef << "x^" << p.expo << endl;
//	return os;
//}