#include<iostream>
using namespace std;
int main() {
	int month;
	cout << "Nhap thang:";
	cin >> month;
	if (month >= 1 && month <= 12) {
		if (month <4)
		{
			cout << "Thang " << month << " thuoc quy 1";
		}
		if (month < 6 && month >= 4)
		{
			cout << "Thang " << month << " thuoc quy 2";
		}
		if (month < 9 && month>=6)
		{
			cout << "Thang " << month << " thuoc quy 3";
		}
		if (month < 12 && month >= 9)
		{
			cout << "Thang " << month << " thuoc quy 3";
		}
	}
	else {
		cout << "Nhap sai thang";
	}
	return 1;
}