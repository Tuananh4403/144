#include<iostream>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap phan tu cua mang: ";
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
void Insoam(float a[], int n) {
	cout << "\nCac phan tu am cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			cout << a[i] << ", ";
		}
	}
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu cua manh: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Insoam(a, n);
	return 1;
}