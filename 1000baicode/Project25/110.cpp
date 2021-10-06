#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 200; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			for  (int k = 0;  k < 40;  k++)
			{
				if(i + 2 * j + 5 * k == 200) {
					cout << i << " to 1 ngan " << j << " to 2 ngan " << k << " to 5 ngan "<<endl;
				}
			}

		}

	}
	return 1;
}
