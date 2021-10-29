#include<iostream>//liet ke so am cua mang
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
bool Ktrday(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			return true;
		}
	}
	return false;
}
void Insocantim(float a[], int n) {
	cout << "\nCac so am trong day: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			cout << a[i] << ", ";
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
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else
	{
		cout << "\nMang khong co gia tri am!";
	}
	return 1;
}