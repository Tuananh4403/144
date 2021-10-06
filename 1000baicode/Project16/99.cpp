#include<iostream>
using namespace std;
int main() {
	double a, b, c, temp;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a > b) {
		temp = a, a = b; b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << ", " << b << ", " << c;
	return 1;
}