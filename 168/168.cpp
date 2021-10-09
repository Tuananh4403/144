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
	int i = x;
	while (i!=0)
	{
		if (i % 5 != 0) {
			return false;
		}
		i = i / 5;
		if (i == 5) {
			return true;
		}
	}
	return false;
}
int vtrdau(int a[], int n) {
	int vtri= 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			vtri = i;
			break;
		}
	}
	return vtri;
}
void Insocantim(int a[], int n) {
	int max = a[vtrdau(a, n)];
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true && a[i] > max) {
			a[i] = max;
		}
	}
	if (Ktrso(max) == true) {
		cout << "\nGia tri can tim: " << max;
	}
	else {
		cout << "\nGia tri tra ve: " << 0;
	}
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