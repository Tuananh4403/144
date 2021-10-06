#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	
	while (a!=b)
	{
		if (a > b) {
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	cout << "Uoc chung lon nhat la: " << a;
	
	return 1;
}