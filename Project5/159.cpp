#include<iostream>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu: ";
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
void Giatritrave(float a[], int n) {
	float gtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 2003) {
			gtr = a[i];
			break;
		}
	}
	cout << "Gia tri can tim: " << gtr;
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a,n);
	Xuat(a,n);
	return 1;
}