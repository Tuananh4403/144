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
		cout << a[i] << ", ";
	}
}
int Timuoc(int x, int y) {
	int a = x;
	int b = y;
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else
		{
			b = b- a;
		}	
	}
	return a; 
}
void Insocantim(int a[], int n) {
	int uocchung = Timuoc(a[0], a[1]);
	for (int i = 2; i < n; i++)
	{
		int uoc = uocchung;
		uocchung = Timuoc(a[i], uocchung);
	}
	cout << "\nUoc chung cua cac phan tu trong mang: " << uocchung;
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