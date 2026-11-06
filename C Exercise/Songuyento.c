#include <stdio.h>

int main() {
    int n;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien n: ");
    scanf ("%d", &n);
    
    if (n <= 1) {
        printf ("\n");
        printf ("SO BAN VUA NHAP KHONG HOP LE! VUI LONG NHAP LAI.\n");
        printf ("\n");
        goto Nhap;
    }
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            printf ("%d KHONG PHAI LA MOT SO NGUYEN TO.\n", n);
            return 0;
        }
    }
    printf ("%d LA MOT SO NGUYEN TO.\n", n);
}