#include<iostream>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap chuoi ky tu: ";
	for (int i=0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "Chuoi ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
void Timso(int a[], int n, int x, int y) {
	int gtr = x;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<y && a[i]>x) {
			gtr = a[i];
			break;
		}
	}
	cout << "\n Gia tri can tim: " << gtr;
}

int main() {
	int a[1000];
	int n, x, y;
	cout << "Nhap n:";
	cin >> n;
	cout << "\n Nhap x: ";
	cin >> x;
	cout << "\n Nhap y: ";
	cin >> y;
	Nhap(a, n);
	Xuat(a, n);
	Timso(a, n, x, y);
	return 1;
}