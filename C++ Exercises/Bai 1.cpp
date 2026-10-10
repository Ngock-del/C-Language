#include <iostream>
using namespace std;

int main() {
	int S, C, chieudai, chieurong;
	cout <<  "Nhap chieu dai cua hinh chu nhat: ";
	cin >> chieudai;
	cout << "Nhap chieu rong cua hinh chu nhat: ";
	cin >> chieurong;
	S = chieudai*chieurong;
	C = (chieudai+chieurong)*2;
	cout << "Dien tich hinh chu nhat la: " << S << endl;
	cout << "Chu vi hinh chu nhat la: " << C << endl; 
	return 0;
}
	
