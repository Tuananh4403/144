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
		if (i < n - 1) {
			cout << a[i] << ", ";
		}
		else {
			cout << a[i] << "."<<endl;
		}
	}
}
bool Ktrso(int a, int b, int c) {
	if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
		return true;
	}
	return false;
}
bool Ktrday(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i], a[i + 1], a[i - 1]) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(int a[], int n) {
	cout << "Cac phan tu thoa mang yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		if (i > 0 && i < n - 1) {
			if (Ktrso(a[i], a[i + 1], a[i - 1]) == true) {
				cout << a[i]<<", ";
			}
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
	if (Ktrday(a,n)==true)
	{
		Insocantim(a, n);
	}
	else
	{
		cout << "Day khong co so can tim !";
	}
	return 1;
}