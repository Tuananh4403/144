#include<iostream>
#include<cmath>
using namespace std;
void Input(int a[], int n) {
	cout << " Enter Elements of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> a[i];
	}
}
void Output(int a[], int n) {
	cout << "Elements Of Array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Element " << i + 1 << ": " << a[i] << endl;
	}
}
bool CheckNumber(int n) {
	int fNumber = 1;
	if (n < 10) {
		fNumber = n;
	}
	else {
		int i = n;
		while (i >= 10) {
			i /= 10;
		}
		fNumber = i;
	}
	if (fNumber % 2 == 0) {
		return true;
	}
	return false;
}
int main() {
	int a[1000];
	int n;
	cout << "Enter Number Of Elements: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	cout << "Elements Right: ";
	for (int i = 0; i < n; i++)
	{
		if (CheckNumber(a[i]) == true) {
			cout << a[i] << "; ";
		}
	}
	cout << "\nEnd!";
	return 1;
}
