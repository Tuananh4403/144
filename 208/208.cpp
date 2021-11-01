#include<iostream>// Sum of perfect square elements
#include< cmath>
using namespace std;
void Import(int a[], int n) {
	cout << "Enter the elements of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> a[i];
	}
}
void Export(int a[], int n) {
	cout << "Elements of array: ";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1) {
			cout << a[i] << ", ";
		}
		else {
			cout << a[i] << ".";
		}
	}
}
bool Check_element(int x) {
	if (sqrt(x) == (int)sqrt(x)) {
		return true;
	}
	return false;
}
int Sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (Check_element(a[i]) == true) {
			sum += a[i];
		}
	}
	return sum;
}
int main() {
	int a[1000];
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	Import(a, n);
	Export(a, n);
	cout << "Sum = " << Sum(a, n);
	return 1;
}