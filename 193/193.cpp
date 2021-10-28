#include<iostream>// Tim so ca dang 3 mu k
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
			cout << a[i] << ".";
		}
	}
}
bool Ktrso(int a) {
	int i = 1;
	while (i < a) {
		i *= 3;
	}
	if (i == a) {
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
	cout << "\nCac phan tu thoa yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			cout << a[i] << ", ";
		}
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
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
