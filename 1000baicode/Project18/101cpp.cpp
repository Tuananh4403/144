#include<iostream>
using namespace std;
struct Day
{
	int d;
	int m;
	int y;
};
void Nhap(Day&);
void Xuat(Day);
int Tinh(Day);
int main() {
	Day day;
	Nhap(day);
	Xuat(day);
	cout << "Thuoc thang co: " << Tinh(day)<<" ngay";
	return 1;
}
void Nhap(Day& x) {
	cout << "Nhap ngay: ";
	cin >> x.d;
	cout << "Nhap thang: ";
	cin >> x.m;
	cout << "Nhap nam: ";
	cin >> x.y;
}
void Xuat(Day x) {
	cout << "Ngay " << x.d << " thang " << x.m << " nam " << x.y;
}
int Tinh(Day x) {
	int temp;
	if (x.m <= 7 && x.m>= 1) {
		if (x.m % 2 != 0)
		{
			temp = 31;
		}
		else if (x.m == 2)
		{
			temp = 28;
		}
		else
		{
			temp = 30;
		}
	}
	else if(x.m %2==0)
	{
		temp = 31;
	}
	else
	{
		temp = 30;
	}
	return temp;
}