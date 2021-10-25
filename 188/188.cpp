#include<iostream> //Tim so vitri so chan lon nhat
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
	cout << "Phan tu cua mang: ";
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
int Sochan(int a[], int n) {
	int soduong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			soduong = a[i];
		}
	}
	return soduong;
}
int Max(int a[], int n) {
	int max = a[Sochan(a,n)];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i] && a[i] % 2 == 0) {
			max = a[i];
		}
	}
	return max;
}
void Insocantim(int a[], int n) {
	cout << "\nVi tri so chan lon nhat: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max(a, n)) {
			cout << i << ", ";
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
	if (Sochan != 0) {
		Insocantim(a, n);
	}
	else {
		cout << "\nMang khong co so chan!";
	}
	return 1;
}