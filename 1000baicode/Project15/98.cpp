#include<iostream>
using namespace std;

int Giaihephuongtrinh(int a, int b, int c, int d, int e, int f, int &x, int &y) {
	int D = a * e - d * b;
	int Dx = c * e - f * b;
	int Dy = a * f - d * c;
	int Songhiem;
	if (D != 0)
	{
		x = Dx / D;
		y = Dy / D;
		cout << "He co nghiem duy nhat: " << "x = " << x << endl << "y = " << y;
		Songhiem = 1;
	}
	else if (Dx == 0 && Dy == 0)
	{
		cout << "He co vo so nghiem!";
		Songhiem = 0;
	}
	else
	{
		cout << " He vo nghiem !";
		Songhiem = -1;
	}
	return Songhiem;
}
int main() {
	int a, b, c, e, d, f, x, y;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	cout << "Nhap c:";
	cin >> c;
	cout << "Nhap d:";
	cin >> d;
	cout << "Nhap e:";
	cin >> e;
	cout << "Nhap f:";
	cin >> f;
	cout << Giaihephuongtrinh(a, b, c, d, e, f, x, y);
	return 0;
}
