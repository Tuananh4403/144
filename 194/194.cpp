#include<iostream> // tim cac cap so gan nhau nhat
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
		else {
			cout << a[i] << " . ";
		}
	}
}
int Khoangcach(int a, int b) {
	return abs(a - b);
}
int Min(int a[], int n) {
	int min =Khoangcach(a[0],a[1]);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] != a[j]) {
				if (Khoangcach(a[i],a[j])<min)
				{
					min = Khoangcach(a[i], a[j]);
				}
			}
		}
	}
	return min;
}
void Insocantim(int a[], int n) {
	cout << "\ncac cap so can tim: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (Khoangcach(a[i], a[j]) == Min(a, n)) {
				cout <<"( " << a[i] << ", " << a[j] << " )"<<", ";
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
	Insocantim(a, n);
	return 1;
}