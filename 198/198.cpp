#include<iostream>//Tim cac vi tri so ;on nhat
#include<cmath>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << ". ";
		}
	}
}
float Max(float a[], int n) {
	float max= a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
void Insocantim(float a[], int n) {
	cout << "\nVi tri so lon nhat la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max(a, n)) {
			cout << i + 1 << ", ";
		}
	}
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Insocantim(a, n);
	return 1;
}