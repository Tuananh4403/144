#include<iostream>
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
		cout << a[i] <<", ";
	}
}
bool Ktrdaykhacnhau(int a[], int n) { // ktra cac chu so trong day khac nhau
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j] && i != j) {
				return false;
			}
		}
	}
	return true;
}
void Incapso(int a[], int n) {
	if (Ktrdaykhacnhau(a, n) == false) {
		cout << "Day so khong thoa yeu cau!";
	}
	else 
	{
		cout << "\nCac cap so thoa yeu cau: ";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] <= a[j] && i != j) {
					cout << "( " << a[i] << ", " << a[j] << " )"<<", ";
				}
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
	Incapso(a, n);
	return 1;
}