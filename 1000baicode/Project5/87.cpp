#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int sum = 0;
	while (sum<10000)
	{
		n++;
		sum += n;
		if (sum >10000)
		{
			sum = sum - n;
			n = n - 1;
			break;
		}
	}
	cout << "Sum = " << sum<<endl;
	cout << "n = " << n;
	return 1;
}