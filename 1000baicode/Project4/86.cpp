#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	int sum = 0;
	while (i <= n) {
		sum += i * i * i;
		i++;
	}
	cout << "Sum = " << sum;
	return 1;
}