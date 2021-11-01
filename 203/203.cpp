#include<iostream>//Sum of elements have the tens digit is the digit 5
#include<cmath>
using namespace std;
void Import(int a[], int n) {
	cout << "Enter Elements of array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << " : ";
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
		else
		{
			cout << a[i] << ". ";
		}
	}
}
bool Check_number(int n) {
	int i = n;
	if (i < 10) {
		return false;
	}
	else if(i < 100)
	{
		int td=i/10;
		if (td != 5) {
			return false;
		}
	}
	else
	{
		i = i / 10;
		int td = i % 10;
		if (td != 5) {
			return false;
		}
	}
	return true;
}
int Sum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (Check_number(a[i]) == true) {
			sum += a[i];
		}
	}
	return sum;
}
int main() {
	int a[1000];
	int n;
	cout << "Enter the Number of Elements of array: ";
	cin >> n;
	Import(a, n);
	Export(a, n);
	cout << "\nSum of elements have the tens digit is the digit 5 = " << Sum(a, n);
	return 1;
}