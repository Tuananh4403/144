#include<iostream>// Sum of element have first digit is odd number
#include<cmath>
using namespace std;
void Import(int a[], int n) {
	cout << "Enter the elements of the array: "<<endl;
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
			cout << a[i] << ",";
		}
		else
		{
			cout << a[i] << ". ";
		}
	}
}
bool Check_first_digit(int n) {
	int i = n;
	if (i < 10) {
		if (i % 2 == 0) {
			return false;
		}
	}
	else {
		int fd;
		while (i != 0) {
			fd = i;
			i = i / 10;
		}
		if (fd % 2 == 0)
		{
			return false;
		}
	}
	return true;
}
int Sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (Check_first_digit(a[i]) == true) {
			sum += a[i];
		}
	}
	return sum;
}
int main() {
	int a[1000];
	int n;
	cout << "\nEnter the number of elements of array: ";
	cin >> n;
	Import(a, n);
	Export(a, n);
	cout << "\nSum of element have first digit is odd number = " << Sum(a, n);
	return 1;
}