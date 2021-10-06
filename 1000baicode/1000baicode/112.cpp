#include<iostream>
using namespace std;
int main() {
	int m, n;
	cout << "Nhap m:";
	cin >> m;
	cout << "Nhap n:";
	cin >> n;
	int i=0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j <n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}