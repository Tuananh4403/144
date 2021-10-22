#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktr(float a[], int n, int x, int y) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= x && a[i] <= y) {
			return true;
		}
	}
	return false;
}
void Insocantim(float a[], int n, float x, float y) {
	cout << "\nCac phan tu thuoc khoang [" << x << ";" << y << " ] :";
	for (int i = 0; i < n; i++)
	{
		if (a[i]>=x && a[i]<=y)
		{
			cout << a[i]<<", ";
		}

	}
}
int main() {
	float a[1000];
	int n;
	float x, y;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap khoang can tim: ";
	cout << "\nX = ";
	cin >> x;
	cout << "\nY = ";
	cin >> y;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktr(a, n, x, y) == true) {
		Insocantim(a, n, x, y);
	}
	else {
		cout << "\nDay khong co so thuoc khoang cho truoc !";
	}

	return 1;
}