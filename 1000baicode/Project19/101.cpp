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
Day Ngaytieptheo(Day);
int main() {
	Day day;
	Nhap(day);
	Xuat(day);
	Day ngaysaudo = Ngaytieptheo;
	cout << "Ngay tiep thep la: ";
	Xuat(ngaysaudo);
	return 1;
}
void Nhap(Day& x) {
	cout << "Nhap ngay: ";
	cin >> x.d;
	cout << "Nhap thang: ";
	cin >> x.m;
	cout << "Nhap nam: ";
	cin >> x.y;
	if (x.m < 1 || x.m > 12)
	{
		cout << "Du lieu thang khong hop le. Xin kiem tra lai!";
	}
		if (x.d < 1 || x.d > 31) 
		{
			cout << "Du lieu ngay khong hop le. Xin kiem tra lai!";
		}
}
void Xuat(Day x) {
	cout << "Ngay " << x.d << " thang " << x.m << " nam " << x.y;
}

Day Ngaytieptheo(Day x) {
	Day temp;
	if (x.m <= 7 ) {
		if (x.m % 2 != 0)
		{
			if (x.d < 31) {
				temp.d= x.d++;
			}
			else
			{
				temp.d = 1;
				temp.m = x.m++;
			}
		}
		else if (x.m == 2)
		{
			if (x.d < 28) {
				temp.d= x.d++;
			}
			else
			{
				
					temp.d = 1;
					temp.m = x.m++;
			}
		}
		else 
		{
			if (x.d < 30) {
				temp.d = x.d++;
			}
			else
			{
				temp.d = 1;
				temp.m = x.m++;
			}
		}	
	}
	else if (x.m<12)
	{
		if (x.m%2==0) {
			if (x.d<30)
			{
				temp.d = x.d++;
			}
			else
			{
				temp.d=1;
				temp.m = x.m++;
			}
		}
		else
		{
			if (x.d < 31)
			{
				temp.d = x.d++;
			}
			else
			{
				temp.d = 1;
				temp.m = x.m++;
			}
		}

	}
	else{
		temp.d = 1;
		temp.m = 1;
		temp.y = x.y++;
	}
	return temp;
}