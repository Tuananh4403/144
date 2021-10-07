#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap chuoi ky tu: ";
	for (int i = 0; i < n; i++)
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
bool ktrso(int x) {
	if ((int)sqrt(x) == (float)sqrt(x)) {
		return true;
	}
	return false;
}
void Timsochinhphuong(int a[], int n) {
	int gtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktrso(a[i]) == true) {
			cout << "\n So chinh phuong trong mang: " << a[i];
			break;
		}
	}
	if (gtr == 0) {
		cout << "\nMang khong co so chinh phuong!";
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timsochinhphuong(a, n);
	return 1;
}