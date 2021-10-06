#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << " Nhap so thuc a, b: ";
	cin >> a >> b;
	if (a * b >= 0) {
		cout << "a va b cung dau";
	}
	else {
		cout << "a va b khac dau";
	}
	return 1;
}