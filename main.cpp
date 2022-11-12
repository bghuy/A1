#include"Array.h"
int main() {
	int a[4] = {1,2,3,4};
	Array<int> c(4,a);
	cin >> c;
	cout << endl;
	cout << c;
	
}