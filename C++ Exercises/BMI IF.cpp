#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int weight;
	float height, BMI;
	string ten;
	cout << "Nhap ten cua ban: ";
	getline(cin, ten);
	cout << "Nhap chieu cao cua ban: ";
	cin >> height;
	cout << "Nhap can nang cua ban: ";
	cin >> weight;
	BMI = weight/pow(height,2);
	cout << "Ban" << ten << endl;
	cout << "Chi so BMI cua ban la: " << fixed << setprecision(2) << BMI << endl;
	if (BMI < 18.5){
	cout << "Ban dang o trang thai: GAY (Can an uong boi bo them)";
}
	else if (BMI < 25) {
	cout << "Ban dang o trang thai: BINH THUONG (Co the cua ban can doi)";
}
	else if (BMI < 30) {
	cout << "Ban dang o trang thai: THUA CAN (Can an uong lanh manh)";
}
	else {
	cout << "Ban dang o trang thai: BEO PHI (Can tap the duc va giam can)";
}
	 return 0;
}

