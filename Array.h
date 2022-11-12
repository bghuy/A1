#ifndef Array_H
#define Array_H
#include<iostream>
#include<fstream>
using namespace std;
template<class T>
class Array {
private:
	int capacity;
	T* arr;
public:
	Array();
	Array(int size, T* inputArray);
	Array(const Array<T>& p);
	~Array();
	Array <T>& operator = (const Array<T>& p);
	T& operator [](int index);
	template<class U>
	friend istream& operator >> (istream& is, Array<U>& p);
	template<class U>
	friend ostream& operator << (ostream& os, Array<U>& p);
};
#endif // !Array_H
template <class T>
Array<T>::Array() {
	capacity = 0;
	arr = new T[0];
}
template< class T>
Array<T>::Array(int size, T* inputArray) {
	capacity = size;
	arr = new T[size];
}
template<class T>
Array<T>::Array(const Array<T>& p) {
	capacity = p.capacity;
	delete[]arr;
	arr = new T[capacity];
	for (int i = 0; i < capacity; i++)
	{
		arr[i] = p.arr[i];
	}
}
template<class T>
Array<T> ::~Array() {
	delete[]arr;
}
template<class T>
Array<T>& Array<T>::operator=(const Array<T>& p) {
	return*this(p);
}
template<class T>
T& Array<T>:: operator[] (int index) {
	return arr[index];
}
template<class U>
istream& operator >> (istream& is, Array<U>& p) {
	cout << "enter capacity: ";
	
	is >> p.capacity;
	p.arr = new U[p.capacity];
	for (int i = 0; i < p.capacity; i++)
	{
		cout << "enter arr[" << "]: ";
		is >> p.arr[i];
	}
	return is;
}
template<class U>
ostream& operator << (ostream& os, Array<U>& p) {
	for (int i = 0; i < p.capacity; i++)
	{
		os << p.arr[i] << " ";
	}
	return os;
}


