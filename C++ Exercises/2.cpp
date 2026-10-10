#include <iostream>
#include <string>
using namespace std;

int main() {
	int tien, tong, nam;
	float laisuat;
	string ten;
	cout << "Nhap ten cua ban: ";
	getline(cin, ten);
	cout << "Nhap tien tiet kiem hang nam cua ban: ";
	cin >> tien;
	cout << "Nhap lai suat: ";
	cin >> laisuat;
	cout << "Nhap so nam ban da gui: ";
	cin >> nam;
	tong = tien*(1+laisuat);
	cout << "Sau " << nam << " nam " << " tong tien tiet kiem cua ban la " << tong << endl;
	
	return 0;
}
