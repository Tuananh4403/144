#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Nhap x:";
	cin >> x;
	int kq;
	if (x>=5)
	{
		kq = x * x * 2 + x * 5 + 9;
	}
	else
	{
		kq = -2 * x * x + 4 * x - 9;
	}
	cout << "Nghiem la: " << kq;
	return 1;
}