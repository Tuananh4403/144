#include<iostream> // Tim so cuc dai!
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
	cout << "Cac phan tu cua mang: ";;
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
bool Ktrso(float a, float b, float c) {
	if (a > b && a > c) {
		return true;
	}
	return false;
}
bool Ktrday(float a[], int n) {
	if (a[0] > a[1]) {
		return true;
	}
	if (a[n - 1] > a[n - 2]) {
		return true;
	}
	for (int i = 1; i < n-1; i++)
	{
		if (Ktrso(a[i], a[i + 1], a[i - 1]) == true) {
			return true;
		}
	}
	return false;
}
void Insocantim(float a[], int n) {
	cout << "\n Cac phan tu thoa yeu cau: ";
	if (a[0] > a[1]) {
		cout << a[0] << ", ";
	}
	for (int i = 1; i < n-1; i++)
	{
		if (Ktrso(a[i], a[i-1], a[i+1]) == true) {
			cout <<a[i]<<", ";
		}
	}
	if (a[n - 1] > a[n - 2]) {
		cout <<a[n-1]<<" . ";
	}
}
int main() {
	float a[1000];
	int n;
	cout << "Nhap so phan tu cau mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else
	{
		cout << "\nMang khong co gia tri thoa yeu cau!";
	}
	return 1; 
}