#include<iostream>
using namespace std;
int main() {
	int N;
	int sum = 0;
	int n = 0;
	cout << "Nhap N: ";
	cin >> N;
	while (n<=N)
	{
		n++;
		if (n % 2 != 0)
		{
			sum += n;
		}
	}
	cout << "N : " << N << endl;
	cout << "Tong la : " << sum;
	return 1;
}