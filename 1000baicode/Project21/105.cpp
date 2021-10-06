#include<iostream>
using namespace std;

int main(){
int a;
cout << "Nhap a: ";
cin >> a;
if (a < 10 && a>99)
{
	cout << "So khong hop le!";
}
else
{
	int b = a / 10;
	int c = a / 100;
	int f = b % 10;
	int  d= a % 10;
	if (c == 1)
	{
		cout << "Mot ";
	}
	else if (c == 2)
	{
		cout << "Hai ";
	}
	else if (c == 3)
	{
		cout << "Ba ";
	}
	else if (c == 4)
	{
		cout << "Bon ";
	}
	else if (c == 5)
	{
		cout << "Nam ";
	}
	else if (c == 6)
	{
		cout << "Sau ";
	}
	else if (c == 7)
	{
		cout << "Bay ";
	}
	else if (c == 8)
	{
		cout << "Tam ";
	}
	else if (c == 9)
	{
		cout << "Chin ";
	}
	cout << "tram ";
	if (f == 1)
	{
		cout << "muoi ";
	}
	else if (f == 2)
	{
		cout << "hai";
	}
	else if (f == 3)
	{
		cout << "ba";
	}
	else if (f == 4)
	{
		cout << "bon";
	}
	else if (f == 5)
	{
		cout << "nam";
	}
	else if (f == 6)
	{
		cout << "sau";
	}
	else if (f == 7)
	{
		cout << "bay";
	}
	else if (f == 8)
	{
		cout << "tam";
	}
	else if (f == 9)
	{
		cout << "chin";
	}
	cout << " muoi ";
	if (d == 1)
	{
		cout << "mot";
	}
	else if (d == 2)
	{
		cout << "hai";
	}
	else if (d == 3)
	{
		cout << "ba";
	}
	else if (d == 4)
	{
		cout << "bon";
	}
	else if (d == 5)
	{
		cout << "nam";
	}
	else if (d == 6)
	{
		cout << "sau";
	}
	else if (d == 7)
	{
		cout << "bay";
	}
	else if (d == 8)
	{
		cout << "tam";
	}
	else if (d == 9)
	{
		cout << "chin";
	}
}
return 1;
}