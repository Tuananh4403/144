#include<iostream>
#include<cmath>

using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap chuoi ky tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "\n Chuoi ky tu: ";
	for (int i = 0; i < n ; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktrsoganh(int x) {
		int t = x;
		int dv, dn = 0;
		if (x > 100) {
			while (t != 0)
			{
				dv = t % 10;
				dn = dn * 10 + dv;
				t = t / 10;
			}
			if (x == dn) {
				return true;
			}
		}
		return false;
	
}
void Timsoganh(int a[], int n) {
	int socantim = 0;
	for (int i = 0; i < n; i++)
	{
		if (Ktrsoganh(a[i]) == true) {
			socantim = a[i];
			break;
		}
	}
	if (socantim != 0) {
		cout << "\nSo ganh dau tien trong chuoi la: " << socantim;
	}
	else {
		cout << "chuoi khong co so ganh!";
	}

}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin>> n;
	Nhap(a, n);
	Xuat(a, n);
	Timsoganh(a, n);
	return 1;
}