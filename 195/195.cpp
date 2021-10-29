#include<iostream> // Tim cap 3 so thoa man (a=b+c)
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
}\
bool Ktrso(float a, float b, float c) {
	if (a == b + c) {
		return true;
	}
	return false;
}
void Insocantim(float a[], int n) {
	cout << "\nCac cap so thoa yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				if (Ktrso(a[i], a[j], a[k]) == true) {
					cout << "( " << a[i] << ", " << a[j] << ", " << a[k] << ") ,";
				}
			}
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