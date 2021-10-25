#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0;  i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else {
			cout << a[i] << " . ";
		}
	}
}
float Soduong(float a[], int n) {
	float soduong=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0) {
			soduong = a[i];
			break;
		}
	}
	return soduong;
}
float Min(float a[], int n) {
	float min = Soduong(a,n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min && a[i]>0) {
			min = a[i];
		}
	}
	return min;
}
void Insocantim(float a[], int n) {
	cout << "\nVi tri so duong nho nhat: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Min(a, n)) {
			cout << i + 1 << ", ";
		}
	}
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Soduong(a,n) != 0) {
		Insocantim(a, n);
	}
	else {
		cout << "\nMang khong co gia tri duong!";
	}
	return 1;
}