#include<iostream>
using namespace std;
void Nhap(int a[], int n) {
	cout << "Nhap phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	cout << "\nCac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Ktrsodau(int x){
	int i = x;
	int csd ; //Chu so dau tien
	if (x < 10 ) {
		csd = x;
	}
	else 
	{
		
		while (i >= 10)
		{
			csd = i / 10;
			i = i / 10;
		}
	}
	if (csd % 2 == 0) {
		return false;
	}
	return true;
}
void Timgiatri(int a[], int n) {
	int gtri = 0;
	for (int  i = 0; i < n; i++)
	{
		if (Ktrsodau(a[i]) == true) {
			gtri = a[i];
			break;
		}
	}
	cout << "\nGia tri can tim: " << gtri;
}
int main(){
	int a[1000];
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	Timgiatri(a, n);
	return 1;
}
