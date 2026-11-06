#include <stdio.h>
#define Gia 30000

int main() {
    int n, m, i, soluong;
    i = 1;
    long tong = 0;
    long gkm;
    soluong = 0;
    printf ("Hay nhap so thanh vien: ");
    scanf ("%d", &n);
    
    do {
    printf ("Hay nhap vao so luong cua nguoi thu %d: ", i);
    scanf ("%d", &m);
    soluong = soluong + m;
    tong = tong + (Gia * m);
    } while (i++ && i <= n);
    printf ("TONG SO LUONG CUA QUY KHACH LA: %d\n", soluong);
    
    if (soluong >= 6) {
        printf ("TONG SO TIEN CUA QUY KHACH LA (TRUOC KHUYEN MAI): %ld VND\n", tong);
        printf ("QUY KHACH DUOC GIAM 10%% TONG HOA DON KHI MUA TU 6 LY TRO LEN!\n");
        gkm = (tong * 0.9);
    }
    
    else {
     printf ("TONG SO TIEN CUA QUY KHACH LA: %ld VND\n", tong);
    return 0;
    }
    
    printf ("TONG SO TIEN CUA QUY KHACH LA: %ld VND", gkm);
}