#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap mang ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "Mang ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktrso(int x) {
	float i = (float)x;
	float temp;
	while (i > 0) {
		temp = (float)(i / 2);
		if (temp == 2) {
			return true;
		}
		i = i / 2;
	}
	return false;
}
void Timgtr(int a[], int n) {
	int gtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			gtr = a[i];
		}
	}
	cout << "\nGia tri can tim: " << gtr;
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timgtr(a, n);
	return 1;
}