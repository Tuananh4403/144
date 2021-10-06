#include<iostream>
using namespace std;
int main() {
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	int i = 1;
	int S= 1;
	while (i<=y)
	{
		S *= x;
		i++;
	}
	cout << "S = " << S;
	return 1;
}