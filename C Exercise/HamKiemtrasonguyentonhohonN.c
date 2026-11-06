#include <stdio.h>
#include <math.h>

int KiemTrasonguyento(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n-1; i++) {
        if (n % i == 0) {
            return 0;
        }
        return 1;
    }
}
int main() {
    int x, tong;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien: ");
    scanf ("%d", &x);

    if (x <= 0) {
        printf ("\n");
        printf ("SO BAN VUA NHAP KHONG HOP LE! VUI LONG NHAP LAI.\n");
        goto Nhap;
    }
    for (int j = 1; j <= x-1; j++) {
        if (KiemTrasonguyento(j) == 1) {
            tong = 0;
            tong = tong + KiemTrasonguyento(j);
            printf ("%d\n", j);
        }
    }
    printf ("Tong cua cac so nguyen to nho hon n la %d", tong);
}