#include <iostream>
using namespace std;

int main() {
    int luaChon;
    
    while (true) { // Vòng l?p vô h?n, gi? chuong trình luôn ch?y
        cout << "--- MENU QUAN CAFE ---" << endl;
        cout << "1. Ca phe sua da (25,000 VND)" << endl;
        cout << "2. Tra dao cam sa (35,000 VND)" << endl;
        cout << "3. Nuoc ep cam (30,000 VND)" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon cua ban (1-4): ";
        cin >> luaChon;
        
        if (luaChon == 4) {
            cout << "Cam on va hen gap lai!" << endl;
            break; // Thoát kh?i vòng l?p while, k?t thúc chuong trình
        }
        
        // C?u trúc if-else x? lý các l?a ch?n 1, 2, 3 và tính ti?n ? dây...
        
        cout << "\n---------------------------\n" << endl; // D?u g?ch ngang phân cách các l?n ch?n
    }
    return 0;
}

