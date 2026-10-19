#include <stdio.h>
#include <math.h>

int KiemTrasochinhphuong(int x) {
    if (x < 1) {
        return 0;
    }
    int kc = sqrt(x);
    if (pow(kc,2)==x) {
        return 1;
    }
    else {
        return 0;
    }
}   

int main() {
    int n;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien n: ");
    scanf ("%d", &n);

    if (n < 1) {
        printf ("SO BAN VUA NHAP KHONG HOP LE! VUI LONG NHAP LAI.\n");
        goto Nhap;
    }
    
    for (int j = 2; j <= n; j++) {
        if (KiemTrasochinhphuong(j)) {
            printf ("%d\n", j);
        }
    }
}