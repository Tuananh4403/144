#include<iostream>// tinh tong cua mang 

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
			cout << a[i] << ".";
		}
	}
}
float Sum(float a[], int n) {
	float sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap cac phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	float sum = Sum(a, n);
	cout << "\nTong cac phan tu cua mang: " << sum;
	return 1;

}