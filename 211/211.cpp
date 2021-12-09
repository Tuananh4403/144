#include<iostream>
#include<cmath>
using namespace std;
void Input(int a[], int n) {
	cout << "Enter Elements of Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> a[i];
	}
}
void Output(int a[1000], int n) {
	cout << "Elements Of Array: "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": " << a[i] << endl;
	}
}
int avgSum(int a[], int n) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0) {
			sum += a[i];
			count++;
		}
	}
	return sum / count;
}
int main() {
	int a[1000];
	int n;
	cout << "Enter Number of Elements: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	cout << "Avg: " << avgSum(a, n);
	return 1;
}