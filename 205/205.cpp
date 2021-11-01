#include <iostream>// sum of the values ​​is greater than the absolute value that precedes it in an array
#include <cmath>
using namespace std;
void Import(float a[], int n) {
	cout << "Enter the elements of array: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1<<": ";
		cin >> a[i];
	}
}
void Export(float a[], int n) {
	cout << "Elements of array: ";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << ".";
		}
	}
}
float Sum(float a[], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i != 0) {
			if (a[i] > abs(a[i-1])) {
				sum += a[i];
			}
		}
	}
	return sum;
}
int main() {
	float a[1000];
	int n;
	cout << "Enter the number of Element of array: ";
	cin >> n;
	Import(a, n);
	Export(a, n);
	cout << "\nSum = " << Sum(a, n);
	return 1;
}