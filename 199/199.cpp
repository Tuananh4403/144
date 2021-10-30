#include<iostream>// liet ke vi tri cua so nguyen to
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
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << ". ";
		}
	}
}
bool Ktrso(int a) {
	if (a < 1) {
		return false;
	}
	else if (a >= 3) {
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0) {
				return false;
			}
		}
	}
	return true;
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
	cout << "\nCac vi tri so nguyen to: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			cout << i + 1 << ", ";
		}
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap cac phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else
	{
		cout << "Mang khong co phan tu thoa yeu cau!";
	}
	return 1;
}
