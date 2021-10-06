#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double S;
	float x,n;
	cout << "Nhap x:";
	cin >> x;
	cout << "Nhap n";
	cin >> n;
	n = 1 / n;
	S = pow(x, n);
	cout << "Can bac n cua x la: " << S;

}