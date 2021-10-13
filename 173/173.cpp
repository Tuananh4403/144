#include<iostream>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap cac phan tu cua mang: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "\nPhan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
void Timsonn(int a[], int n) {
	int b[100];
	for (int i = 0; i < 10; i++)
	{
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) // dem so lan xuat hien cua cac chu so
	{
		int c = a[i];
		int j;
		while (c!=0)
		{
			j = c % 10;
			if (j == 0) {
				b[0]++;
			}
			if (j == 1) {
				b[1]++;
			}
			if (j == 2) {
				b[2]++;
			}
			if (j == 3) {
				b[3]++;
			}
			if (j == 4) {
				b[4]++;
			}
			if (j == 5) {
				b[5]++;
			}
			if (j == 6) {
				b[6]++;
			}
			if (j == 7) {
				b[7]++;
			}
			if (j == 8) {
				b[8]++;
			}
			if (j == 9) {
				b[9]++;
			}
			c = c / 10;
		}
	}
	int slxh=0; //so lan xuat hien
	int csxh=0; //chu so xuat hien it nhat
	for (int j = 0; j < 10; j++)
	{
		if (b[j] != 0) {
			slxh = b[j];
			break;
		}
	}  // Tim cac chu so xuat hien
	for (int i = 0; i < 10; i++)
	{
		
		if (slxh > b[i] && b[i]!=0) {
			csxh = i;
			slxh = b[i];
		}
	}
	cout << "\nChu so xuat hien it nhat la: " << csxh;
	cout << "\nXuat hien " << slxh << " lan!";
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timsonn(a, n);
	return 1;
}