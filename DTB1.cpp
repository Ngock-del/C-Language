#include <iostream>
using namespace std;
int main() {
    float DTB;
    cout << "Nhap vao diem trung binh cua ban: ";
    cin >> DTB;
    if (DTB >= 0 && DTB <= 10) {
        if (DTB < 4.0) {
        	cout << "Ban xep loai: KEM" ;
    	}
        else if (DTB >= 4 && DTB < 5) {
			cout << "Ban xep loai: YEU" ;
		}
		else if (DTB >= 5 && DTB < 6.5) {
			cout << "Ban xep loai: TRUNG BINH" ;
		}
		else if (DTB >= 6.5 && DTB < 8) {
			cout << "Ban xep loai: KHA" ;
		}
		else if (DTB >= 8 && DTB < 9) {
			cout << "Ban xep loai: GIOI";
		}
		else {
			cout << "Ban xep loai: XUAT SAC";	
		}
	}
	else {
	cout << "Diem cua ban khong hop le!" ;	
	}
	return 0;	
	}

