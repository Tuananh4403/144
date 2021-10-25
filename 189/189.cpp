#include<iostream> // Liet ke cac so nguyen to trong mang co chu so dau tien la so le
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
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << " . ";
		}
	}
}
bool Ktrso(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 3; i < n; i++)
		{
			if (n % i == 0) {
				return false;
			}
		} 
	}
	return true;
} //Ktr so nguyen to
bool Ktrso2(int n) {
	if (Ktrso(n) == true) {
		int x = n;
		int sodau;
		if (x < 10) {
			sodau = x;
		}
		else {
			while (x != 0) {
				sodau = x;
				x = x / 10;
			}
		}
		if (sodau % 2 != 0) {
			return true;
		}
	}
	return false;
}
bool Ktrday(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso2(a[i]) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(int a[], int n) {
	cout << "\nCac so thoa man yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso2(a[i]) == true) {
			cout << a[i]<<", ";
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
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else {
		cout << "\nMang kho co gia tri thoa yeu cau!";
	}
	return 1;
}