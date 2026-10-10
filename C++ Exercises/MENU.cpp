#include <iostream>
using namespace std;

int main() {
	int soluong, tien, tong, luachon;
	
	while (true) {
		cout << "---MENU QUAN CAFE---" << endl;
		cout << "1. Tra tac (15000)" << endl;
		cout << "2. Sua chua trai cay (20000)" << endl;
		cout << "3. Matcha latte (30000)" << endl;
		cout << "4.Thoat " << endl;
		cout << "Xin quy khach chon mon: ";
		cin >> luachon;
		
		if (luachon == 4) {
			cout << "Xin cam on quy khach!" << endl;	
			break;
 		}	
		
		if (luachon < 1 || luachon > 4) {
			cout << "Lua chon cua quy khach khong hop le!" << endl;
			cout << "Vui long nhap lai." << endl;
			continue;
		}
		
		if (luachon > 0 || luachon < 4) {
			continue;
		}
		if (luachon == 1) {
			tien = 15000;
			cout << "Xin quy khach nhap so luong: ";
			cin >> soluong;
			tong = tien*soluong;
			cout << "Tong hoa don cua quy khach la: " << tong;
		}
		
		else if (luachon == 2) {
			tien = 20000;
			cout << "Xin quy khach nhap so luong: ";
			cin >> soluong;
			tong = tien*soluong;
			cout << "Tong hoa don cua quy khach la: " << tong;
		}
		
		else (luachon == 3); {
			tien = 30000;
			cout << "Xin quy khach nhap so luong: ";
			cin >> soluong;
			tong = tien*soluong;
			cout << "Tong hoa don cua quy khach la: " << tong;
		}
		cout << " Cam on quy khach!" << endl;
	}
	return 0;
	
}
