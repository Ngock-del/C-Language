#include <iostream>
using namespace std;

int main() {
	int chieudai, chieurong, chuvi, dientich;
	cout <<"Nhap vao chieu dai:";
	cin >> chieudai;
	cout <<"Nhap vao chieu rong:";
	cin >> chieurong;
	chuvi = (chieudai + chieurong)*2;
	dientich = chieudai*chieurong;
	cout <<"Chu vi la: " << chuvi << endl;
	cout <<"Dien tich la: " << dientich << endl;
	return 0;
}
