#include<iostream>
#include<cmath>
using namespace std;
void Input(long long a[], int n) {
	cout << "Enter Elements Of Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> a[i];
	}
}

double avgSum(long long a[], int n, long long x ) {
	double avg;
	long long sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x) {
			sum += a[i];
			count++;
		}
	}
	avg = (double)sum / count;
	return avg;
}
int main() {
	long long a[1000], x;
	int n;
	cout << "Enter Numbers of Elements: ";
	cin >> n;
	cout << "Enter the Element: ";
	cin >> x;
	Input(a, n);
	cout << "Avg: " << avgSum(a, n, x);
	return 1;
}