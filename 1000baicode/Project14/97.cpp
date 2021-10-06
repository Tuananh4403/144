#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap canh thu 1: ";
	cin >> a;
	cout << "Nhap canh thu 2: ";
	cin >> b;
	cout << "Nhap canh thu 3: ";
	cin >> c;
	if (a==b&&b==c)
	{
		cout << "Tam giac la tam giac deu!";
	}
	else if (a==b||b==c||a==c)
	{
		cout << "Tam giac la tam giac can! ";
	}
	else if (a * a == b * b + c * c || a * a + b * b == c * c || b * b == c * c + a * a) {
		cout << "Tam giac la tam giac vuong!";
	}
	else
	{
		cout << "Tam giac la tam giac thuong!";
	}

	return 1;
}