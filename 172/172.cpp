#include<iostream>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
int BCNN(int x, int y) {
	int boichung;
	int snh;
	if (x > y) {
		snh = y;
	}
	else {
		snh = x;
	}
	for (int i = x*y; i >= snh; i--)
	{
		if (i % x == 0 && i % y == 0) {
			boichung = i;
		}
	}
	return boichung;
}
void Insocantim(int a[], int n) {
	int BCNN_mang= 0 ;
	int boichung = BCNN(a[0], a[1]);
	for (int i = 2; i < n; i++)
	{
		BCNN_mang = BCNN(boichung, a[i]);
		boichung = BCNN_mang;
	}
	cout << "\nBoi chung nho nhat cua mang: " << BCNN_mang;
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Insocantim(a, n);
	return 1;
}