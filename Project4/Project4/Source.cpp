#include<iostream>
using namespace std;
class CNgay
{
public:
	int d;
	int m;
	int y;
private:
	friend istream& operator >>(istream&, CNgay&);
	friend ostream& operator <<(ostream&, CNgay&);
	CNgay();
	CNgay(const CNgay&);
	CNgay(int, int, int);
};
int main() {
	return 1;
}
istream& operator >>(istream&, CNgay& x) {
	cout << "Nhap ngay: ";
	is >> x.d;
	cout << "Nhap thang: ";
	is >> x.m;
	cout << "Nhap nam: ";
	is >> x.y;
		return is;
}
ostream& operator <<(ostream&, CNgay& x) {
	os << "Ngay: " << x.d;
	os << "Thang: " << x.m;
	os << "Nam: " << x.y;
}
CNgay::CNgay() {
	d = 1;
	m = 1;
	y = 1;
}
CNgay::CNgay(const CNgay&x) {
	d = x.d;
	m = x.m;
	y = x.y;
}
CNgay::CNgay(int dd, int mm, int yy) {
	d = dd;
	m = mm;
	y = yy;
}