#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >>n;
	int i = 2;
	while (i<n)
	{
		if (n % i == 0) {
			cout << "n khong la so nguuyen to!";
			break;
		}
		i++;
	}
	if (i == n) {
		cout << "n la so nguyen to!";
	}
}