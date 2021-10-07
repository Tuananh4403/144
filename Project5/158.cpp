#include<iostream>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap cac phan tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	cout << "Cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
void Timkhoang(float a[], int n) {
	float max = a[0];
	float min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	if (min<0 && max <0) {
		
		max = (-1) * min;

	}
	else if (min < 0) {
		if (max > (-1) * min) {
			min = max * (-1);
		}
		else {
			max = min * (-1);
		}
	}
	else {
		min = max * (-1);
	}
	cout << "\n Khoang chua gia tri trong mang la: [" << min << ", " << max << "] ! ";
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timkhoang(a, n);
	return 1;
}