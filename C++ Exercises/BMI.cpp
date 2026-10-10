#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int weight ;
	float height, BMI ;
	string ten;
	cout << "Nhap ten cua ban: ";
	getline(cin, ten);
	cout << "Nhap chieu cao cua ban: ";
	cin >> height;
	cout << "Nhap can nang cua ban: ";
	cin >> weight;
	BMI = weight/pow(height,2);
	cout << "Ban " << ten << endl;
	cout << "Chi so BMI cua ban la: " << BMI << endl;
	
	return 0;
}
