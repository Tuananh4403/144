#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	if (a>b && a>c)
	{
		cout << "So lon nhat la: " << a;
	}
	else if (b > a && b > c)
	{
		cout << "So lon nhat la:" << b;
	}
	else {
		cout << "So lon nhat la:" << c;
	}
	return 1;
}