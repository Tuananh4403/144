#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float x1,x2, a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c:";
	cin >> c;
	if (a==0)
	{
		if (b==0)
		{
			if (c == 0) {
				cout << "Phuong trinh co vo so nghiem!";
			}
			else
			{
				cout << "Phuong trinh vo nghiem!";
			}
		}
		else
		{
			cout << "phuong trinh co nghiem duy nhat x = " << -c / b;
		}

	}
	else
	{
		float D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (b - sqrt(D)) / (2 * a);
			x2 = -((b - sqrt(D)) / (2 * a));
			cout << "Phuong trinh co 2 nghiem phan biet:" << endl << "x1 = " << x1 << endl << "x2 = " << x2;
		}
		else if (D < 0)
		{
			cout << "Phuong trinh vo nghiem!";
		}
		else
		{
			cout << "Phuong trinh co nghiem kep:";
			x1 = -b / (2 * a);
		}
	}
	return 1;
	}