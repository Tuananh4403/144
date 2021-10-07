#include<iostream>
using namespace std;
void Nhap(float a[], int n) {
	cout << "Nhap chuoi ky tu: ";
	for (int i = 0; i <n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	cout << "Chuoi ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
void Timso(float a[], int n) {
	float gtri;
	int vtri = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1] * a[i - 1]) {
			gtri = a[i];
			vtri = i;
			cout << "\n Gia tri thoa yeu cau: " << gtri << endl;
			cout << "Vi tri trong mang: " << vtri + 1;
		}

	}
	if (vtri == -1) {
		cout << "\n Khong co gia tri thoa yeu cau!" << vtri;
	}
}
int main(){
	float a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timso(a, n);
	return 1;
}