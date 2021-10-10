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
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktrsochan(int x) {
	if (x % 2 == 0) {
		return true;
	}
	return false;
}
int vtrdaule(int a[], int n) {
	int vtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrsochan(a[i]) == false && a[i] != 0) {
			vtr = i;
			break;
		}
	}
	return vtr;
}
int vtrdauchan(int a[], int n) {
	int vtr = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrsochan(a[i]) == true && a[i] != 0) {
			vtr = i;
			break;
		}
	}
	return vtr;
}
int maxle(int a[], int n) {
	int max = a[ vtrdaule(a, n) ];
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
void Insocantim(int a[], int n) {
	int socantim = a[vtrdauchan(a, n)];
	int temp=0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrsochan(a[i]) == true &&socantim<a[i])
		{
			socantim = a[i];
		}
		if (socantim > maxle(a, n)) {
			socantim = temp;
		}
		temp = socantim;
	}
	if (temp != 0) {
		cout << "\nSo can tim: " << socantim;
	}
	else
	{
		cout << "\nMang khong co gia tri thoa mang!";
	}
	
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a,n);
	Insocantim(a, n);
	return 1;
}