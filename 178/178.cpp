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
bool Ktrso(int a, int x, int y) {
	if (a % 2 == 0 && a<=y && a>=x){
		return true;
	}
	return false;
}
bool Ktrday(int a[], int n, int x, int y) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i], x, y) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(int a[], int n, int x, int y) {
	cout << "\nCac phan tu thuoc khoang can tim: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i], x, y) == true)
		{
			cout << a[i] << ", ";
		}
	}
}
int main() {
	int a[1000];
	int n, x, y;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktrday(a, n, x, y) == true) {
		Insocantim(a, n, x, y);
	}
	else {
		cout << "\nKhong co so thoa yeu cau !";
	}
	return 1;
}
