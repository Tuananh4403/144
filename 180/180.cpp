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
bool Ktrso(float x, float y) {
	if (x < abs(y)) {
		return true;
	}
	return false;
}
bool Ktrday(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i], a[i + 1]) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(float a[], int n) {
	cout << "\nCac phan tu thoa yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i], a[i + 1]) == true) {
			if (i < n - 1) {
				cout << a[i] << ", ";
			}
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
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else {
		cout << "Mang khong co phan tu thoa yeu cau!";
	}
	return 1;
}