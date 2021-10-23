#include<iostream>
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
		if (i < n - 1) {
			cout << a[i] << ", ";
		}
		else {
			cout << a[i] << "."<<endl;
		}
	}
}
bool Ktrday(float a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0) {
			return true;
		}
	}
	return false;
}
void Insocantim(float a[], int n) {
	cout << "Cac phan tu thoa yeu cau: ";
	for (int i = 0; i < n; i++)
	{
		if (i != 0 && i != n - 1) {
			if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0) {
				cout << a[i] << ",";
			}
		}
		else {
			if (i == 0 &&a[1]<0) {
				cout << a[i] << ", ";
			}
			if (i == n - 1 && a[i - 1] < 0) {
				cout << a[i] << ".";
			}
		}
	}
}
int main(){
	float a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else {
		cout << "Day khong co so can tim !";
	}
	return 1;
}