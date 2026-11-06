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
    int x;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien: ");
    scanf ("%d", &x);

    if (x <= 1) {
        printf ("\n");
        printf ("SO BAN VUA NHAP KHONG HOP LE! VUI LONG NHAP LAI.\n");
        goto Nhap;
    }
    int kt = KiemTrasonguyento(x);
    
    if (kt == 0) {
        printf ("%d KHONG PHAI LA MOT SO NGUYEN TO.\n", x);
    }
    else {
        printf ("%d LA MOT SO NGUYEN TO.\n", x);
    }
}
