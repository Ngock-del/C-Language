#include <stdio.h>

int Giaithua (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else { 
    return n*Giaithua(n-1);
    }
}

int main() {
    int n;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien n (n >= 0): ");
    scanf ("%d", &n);
    if (n < 0) {
    printf ("So ban vua nhap khong hop le! Vui long nhap lai.\n");
    goto Nhap;
    }
    Giaithua(n);   
    printf ("%d! = %d", n, Giaithua(n)); 
}