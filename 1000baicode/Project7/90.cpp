#include<iostream>
using namespace std;
int main() {
	int N;
	int sum = 0;
	int n = 0;
	cout << "Nhap N: ";
	cin >> N;
	while (sum < N)
	{
		n++;
		sum += n;
		if (sum > N)
		{
			sum = sum - n;
			n = n - 1;
			break;
		}
	}
	cout << "n : " << n << endl;
	cout << "Tong la : " << sum;
	return 1;
}