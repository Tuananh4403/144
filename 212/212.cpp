#include<iostream>
#include<cmath>
using namespace std;
void Input(long long a[], int n) {
	cout << "Enter Elements Of Array: "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> a[i];
	}
}
bool snt(long long  a) {
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % 2 == 0) {
			return false;
		}
	}
	return true;
}
double avgSum(long long a[], int n) {
	long long sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (snt(a[i]) == true) {
			sum += a[i];
			count++;
		}
	}
	return sum / count;
}
int main() {
	long long a[1000];
	int n;
	cout << "Enter Numbers of Elements: ";
	cin >> n;
	Input(a, n);
	cout << "Avg: " << avgSum(a, n);
	return 1;
}