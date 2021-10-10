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
bool Ktrso(int x) {
	
	if (x < 2) {
		return false;
	}
	else if(x == 2)
	{
		return true;
	}
	else 
	{
		for (int i = 3; i < x; i++)
		{
			if (x % i == 0) {
				return false;
			}
		}
	}
	return true;
}
int vtrdau(int a[], int n) {
	int vtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			vtr = i;
			break;
		}
	}
	return vtr;
}
void Insocantim(int a[], int n) {
	int max = a[vtrdau(a, n)];
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true && a[i] > max) {
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (max < a[i]) {
			max = 0;
			break;
		}
	}
	if (max == 0) {
		cout << "\nKhong co gia tri thoa yeu cau!";
	}
	else
	{
		cout << "\nGia tri can tim: " << max;
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