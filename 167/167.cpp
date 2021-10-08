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
	cout << "Mang ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktrso(int x) {
	int i = x;
	int temp;
	while (i != 0) {
		temp = i % 10;
		if (temp % 2 == 0) {
			return false;
		}
		i = i / 10;
	}
	return true;
}
int vtrisodautien(int a[], int n) {
	int vtri = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			vtri = i;
			break;
		}
	}
	return vtri;
}
void Timso(int a[], int n) {
	int max = a[vtrisodautien(a, n)];
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true && max <a[i]) {
			max = a[i];
		}
	}
	if (max == a[0]) {
		cout << "\nGia tri tra ve: " << 0;
	}
	else {
		cout << "\nGia tri can tim: " << max;
	}
}
int main(){
	int a[1000];
	int n;
	cout << "So phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timso(a, n);
	return 1;
}