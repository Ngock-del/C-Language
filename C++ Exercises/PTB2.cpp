#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, x, del, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else {
				cout << "Vo nghiem" << endl;
			}
		}
		else {
			x = -c/b;
			cout << "Nghiem cua phuong trinh la: " << x << endl;
		}
	}
	else {
		del=pow(b,2)-4*a*c;
		cout << "Delta cua phuong trinh la: " << del << endl;
	}
	if (del < 0) {
		cout << " Phuong trinh vo nghiem " << endl;
	}
	else if (del == 0) {
		x = -b/(2*a);
		cout << "Phuong trinh mang nghiem kep la: " << x << endl;
	}
	else {
		x1 = (-b+sqrt(del))/(2*a);
		x2 = (-b-sqrt(del))/(2*a);
		cout << "Phuong trinh co 2 nghiem phan biet la: " << x1 << " va " << x2 << endl;
	}
	return 0;
}
