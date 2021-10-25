#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1) {
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << ".";
		}
	}
}
bool Ktrso(int n) {
	float a = (float)sqrt(n);
	int b = (int)sqrt(n);
	if (a == b) {
		return true;
	}
	return false;
}
bool Ktrday(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(int a[], int n) {
	cout << "\nVi tri cac so chinh phuong cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			cout << i+1 << ", ";
		}
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu cua mamg: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else {
		cout << "Mang khong co phan tu can tim!";
	}
	return 1;
}