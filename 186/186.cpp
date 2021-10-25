#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu cau mang: ";
	for (int i = 0; i < n; i++)
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
float Soamdautien(float a[], int n) {
	float soam=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			soam = a[i];
			break;
		}
	}
	return soam;
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Soamdautien(a, n) != 0) {
		cout << "Vi tri cac so am bang so am dau tien cua mang: ";
		for (int i = 0; i < n; i++)
		{
			if (a[i] == Soamdautien(a, n)) {
				cout << i << ", ";
			}
		}
	}
	else {
		cout << "Mang khong co so am!";
	}
	return 1;
}