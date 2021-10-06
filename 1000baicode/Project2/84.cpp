#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	if (a != 0) {
		cout << "x = " << -b / a;
	}
	else {
		cout << "Phuong tring vo nghiem";
	}
}