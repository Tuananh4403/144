#include<iostream> // Tim phan tu co toan chu so le
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
		if (i!=n-1)
		{
			cout << a[i] << ", ";
		}
		else {
			cout << a[i] << " . ";
		}

	}
}
bool Ktrso(int n) {
	int i = n;
	if (i > 10) {
		while (i != 0)
		{
			if ((i % 10) % 2 == 0) {
				return false;
			}
			i = i / 10;
		}
	}
	else
	{
		if (n % 2 == 0) {
			return false;
		}
	}
	return true;
}
bool Ktrday(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == false) {
			return false;
		}
	}
	return true;
}
void Insocantim(int a[], int n) {
	cout << "\nCac phan tu thoa yeu cau:";
	for (int i = 0; i < n; i++)
	{
		if (Ktrso(a[i]) == true) {
			cout << a[i] << ", ";
		}
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	if (Ktrday(a, n) == true) {
		Insocantim(a, n);
	}
	else
	{
		cout << "Mang khong co phan tu thoa yeu cau!";
	}
	return 1;
}