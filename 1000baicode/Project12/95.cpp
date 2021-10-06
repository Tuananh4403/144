#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap b: ";
	cin >> c;
	if (a<0)
	{
		a = a * -1;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	if (c < 0)
	{
		c = c * -1;
	}
	cout << "|a| = " << a<<endl;
	cout << "|b| = " << b<<endl;
	cout << "|c| = " << c;
	return 1;
}